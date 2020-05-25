# Лабораторная работа №3
## На тему: Наследование и полиморфизм.
Выполнили: Авдеев АЮ
              Бреславский НВ  
Задание: Написать программу на С++, с использованием библиотеки boost, программу считающую сумму и разность двух введенных с клавиатуры чисел. 
Входные данные вводятся в формате <a>+<b> или <a>-<b>, где <a> - первое число, <b> - второе число. 
Для расчета суммы использовать веб ресурс http://157.230.27.215/calc/sum/<a>/<b>, где <a> - первое число, <b> - второе число.
Для расчета разности использовать следящий веб ресурс http://157.230.27.215/calc/diff/<a>/<b>, где <a> - первое число, <b> - второе число.

Примеры входных данных:
· 12+12
· 1-5
· 99+412
· 923-0

В результате выполнения программы в консоли необходимо вывести результат арифметической операции.

## HTTP(HyperText Transfer Protocol) 
— это протокол, позволяющий получать различные ресурсы, например HTML-документы. 
**HTML** (от англ. HyperText Markup Language — «язык гипертекстовой разметки») — стандартизированный язык разметки документов во Всемирной паутине. Большинство веб-страниц содержат описание разметки на языке HTML (или XHTML). Язык HTML интерпретируется браузерами; полученный в результате интерпретации форматированный текст отображается на экране монитора компьютера или мобильного устройства.
Протокол HTTP лежит в основе обмена данными в Интернете. HTTP является протоколом клиент-серверного взаимодействия, что означает инициирование запросов к серверу самим получателем, обычно веб-браузером (web-browser). Полученный итоговый документ будет (может) состоять из различных поддокументов являющихся частью итогового документа: например, из отдельно полученного текста, описания структуры документа, изображений, видео-файлов, скриптов и многого другого.
Клиенты и серверы взаимодействуют, обмениваясь одиночными сообщениями (а не потоком данных). Сообщения, отправленные клиентом, обычно веб-бруезером, называются запросами, а сообщения, отправленные сервером, называются ответами.
Хотя HTTP был разработан  еще в начале 1990-х годов, за счет своей расширяемости в дальнейшем он все время совершенствовался.  HTTP является протоколом прикладного уровня, который чаще всего использует возможности другого протокола - TCP (или TLS - защищённый TCP) - для пересылки своих сообщений, однако любой другой надежный транспортный протокол теоретически может быть использован для доставки таких сообщений. Благодаря своей расширяемости, он используется не только для получения клиентом гипертекстовых документов, изображений и видео, но и для передачи содержимого серверам, например, с помощью HTML-форм. HTTP также может быть использован для получения только частей документа с целью обновления веб-страницы по запросу (например посредством AJAX запроса).
HTTP следует заданному циклу всякий раз, когда посылает запрос: 
1.	Браузер запросит HTML-страницу. Затем сервер возвращает HTML-файл с хоста.1
2.	Браузер запросит таблицу стилей. Затем сервер возвращает файл CSS.
3.	Браузер запрашивает изображение в формате JPG. Сервер возвращает файл JPG.
4.	Браузер запросит код JavaScript (язык программирования). После этого сервер возвращает JS-файл.
5.	Браузер запрашивает различные формы данных. Сервер возвращает данные в виде XML или JSON файлов.
## HTTPS (HyperText Transfer Protocol Secure) ##
— расширение протокола HTTP для поддержки шифрования в целях повышения безопасности. Данные в протоколе HTTPS передаются поверх криптографических протоколов TLS или устаревшего в 2015 году SSL. В отличие от HTTP с TCP-портом 80, для HTTPS по умолчанию используется TCP-порт 443.
**Различия между HTTP и HTTPS.**
Большинство людей не знают о различиях между http:// и https://, поскольку оба они почти визуально схожи. Знание различий между ними имеет первостепенное значение для поддержания безопасного и эффективного сайта, способного защитить информацию и данные. Браузеры были разработаны таким образом, что строка URL-адреса будет выделять буквы S в HTTPS другим цветом, чтобы пользователи могли их заметить.
Вот некоторые очевидные различия между ними:
1. HTTP - В настоящее время шифрование данных не осуществляется.
Каждая URL-ссылка использует HTTP в качестве основного типа протокола передачи гипертекста. Учитывая это, HTTP уподобляется системе, которая не принадлежит ни одному государству. Это позволяет включить любое соединение по требованию.
По сути, этот протокол является протоколом прикладного уровня. Это означает, что он больше фокусируется на информации, которая предоставляется пользователю, но не на том, как эти данные передаются от узла-источника к получателю. Это может нанести ущерб, так как это средство доставки может быть легко перехвачено и отслежено злоумышленниками сторонних пользователей (обычно известными как хакеры).
2. HTTPS - Данные зашифрованы.
По сравнению с HTTP, информация о пользователе, такая как номера кредитных карт и другие формы важной личной информации, зашифрована. Это предотвращает доступ вредоносных пользователей третьих сторон к этим формам конфиденциальных данных в любой форме.
При более безопасной сети пользователи будут иметь более высокий уровень доверия при использовании сайта, поскольку их данные зашифрованы, а пользователям со злым умыслом будет трудно взломать свои данные.[3]
3. Статистика показывает, что 84% покупателей покидают веб-сайты после того, как узнают, что веб-сайт передает данные по незащищенному каналу.
4. 29% пользователей осознают разницу между HTTP и HTTPS и активно ищут эту разницу в адресной строке.
Являясь новой формой технологии, HTTPS все еще имеет несколько особенностей, которые до сих пор считаются экспериментальными. В связи с этим более старые типы браузеров будут испытывать трудности с адаптацией к этим веб-сайтам.
По сравнению с простой настройкой сайта с HTTP, переход на HTTPS требует от пользователя прохождения нескольких юридических процедур для получения SSL-сертификата. Это означает, что владельцы страниц и сайтов вынуждены тратить деньги. Получение SSL-сертификатов является платной услугой от центра сертификации.
Благодаря процессу кодирования сервер направляет энергию и время обработки на кодирование информации до того, как она будет передана.
## ВЫВОДЫ ## 
•	HTTP небезопасен, в то время как HTTPS является безопасным протоколом.
•	HTTP использует TCP порт 80, в то время как HTTPS использует TCP порт 4433.
•	HTTP работает на прикладном уровне, в то время как HTTPS работает на транспортном уровне безопасности (TLS)
•	Для HTTP не требуется сертификат SSL, но HTTPS требует, чтобы сертификат SSL был подписан и внедрен центром сертификации (ЦС).
•	HTTP не обязательно требует подтверждения домена, в то время как HTTPS в обязательном порядке требует подтверждения домена и определенных сертификатов, которые требуют юридического оформления.
•	Во время зашифровки данных непосредственно перед их передачей для протокола HTTPS шифрование данных в HTTP не выполняется.
•	HTTPS является расширением протокола HTTP. В этом случае он работает совместно с другим протоколом, а именно Secure Sockets Layer (SSL) для безопасной передачи данных.
•	Как HTTP, так и HTTPS не обращаются к данным, которые будут передаваться по назначению. И наоборот, SSL не имеет никакого отношения к тому, как будут выглядеть данные.
