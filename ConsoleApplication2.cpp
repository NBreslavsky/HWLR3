#include <cstdlib>
#include <iostream>
#include <string>
#include <boost/beast/core.hpp>
//#include <boost_1_73_0/boost/beast/core/detail/config.hpp>
#include <boost/beast/http.hpp>
#include <boost/beast/version.hpp>
#include <boost/asio/connect.hpp>
#include <boost/asio/ip/tcp.hpp>
#include <boost/beast.hpp>
#include <boost/beast/http/read.hpp>
using namespace std;

namespace beast = boost::beast; // from <boost/beast.hpp>
namespace http = beast::http; // from <boost/beast/http.hpp>
namespace net = boost::asio; // from <boost/asio.hpp>
using tcp = net::ip::tcp; // from <boost/asio/ip/tcp.hpp>

// Performs an HTTP GET and prints the response
int main(int argc, char** argv) {
	try
	{
		//http://157.230.27.215/calc/diff/20/10 » 20 - 10 = 10
		//http://157.230.27.215/calc/sum/1/3 » 1 + 3 = 4
		int a = 0, b = 0;
		string const host = "157.230.27.215";
		string const port = "80";
		stringstream url;
		cin >> a;
		cin >> b;
		url << "/calc/diff/" << a << "/" << b;
		//20-10
		//1+3
		std::string const target = url.str();
		int const version = 11;
		std::cout << target;
		// The io_context is required for all I/O
		net::io_context ioc;

		// These objects perform our I/O
		tcp::resolver resolver(ioc);
		auto const results = resolver.resolve(host, port);

		beast::tcp_stream stream(ioc);
		stream.connect(results);

		// Set up an HTTP GET request message
		http::request<http::string_body> req{ http::verb::get, target, version };
		//headers
		req.set(http::field::host, host);
		req.set(http::field::user_agent, "gg/test");

		// Send the HTTP request to the remote host
		http::write(stream, req);

		// This buffer is used for reading and must be persisted
		beast::flat_buffer buffer;

		// Declare a container to hold the response
		http::response<http::dynamic_body> res;

		// Receive the HTTP response
		http::read(stream, buffer, res);

		// Write the message to standard out
		std::cout << res << std::endl;

		// Gracefully close the socket
		beast::error_code ec;
		stream.socket().shutdown(tcp::socket::shutdown_both, ec);

		// not_connected happens sometimes
		// so don't bother reporting it.
		//
		if (ec && ec != beast::errc::not_connected)
			throw beast::system_error{ ec };

		// If we get here then the connection is closed gracefully
	}
	catch (std::exception const& e) {
		std::cerr << "Error: " << e.what() << std::endl;
		return EXIT_FAILURE;
	}
	return EXIT_SUCCESS;
}