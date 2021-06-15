Action()
{

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	web_add_auto_header("sec-ch-ua", 
		"\" Not;A Brand\";v=\"99\", \"Google Chrome\";v=\"91\", \"Chromium\";v=\"91\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_header("Sec-Fetch-Dest", 
		"document");

	web_add_auto_header("Sec-Fetch-User", 
		"?1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_reg_save_param_ex(
		"ParamName=c_sourcecode",
		"LB=<input type=\"hidden\" name=\"_sourcePage\" value=\"",
		"RB=\"",
		"Ordinal=1",
		SEARCH_FILTERS,
		LAST);

	web_reg_save_param_ex(
		"ParamName=c__fp",
		"LB=<input type=\"hidden\" name=\"__fp\" value=\"",
		"RB=\"",
		"Ordinal=1",
		SEARCH_FILTERS,
		LAST);

	web_url("Catalog.action", 
		"URL=https://petstore.octoperf.com/actions/Catalog.action", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTTP", 
		LAST);

	/*Possible OAUTH authorization was detected. It is recommended to correlate the authorization parameters.*/

	web_add_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"style");

	web_concurrent_start(NULL);

	web_url("jpetstore.css", 
		"URL=https://petstore.octoperf.com/css/jpetstore.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action", 
		"Snapshot=t2.inf", 
		LAST);

	web_add_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"image");

	web_url("separator.gif", 
		"URL=https://petstore.octoperf.com/images/separator.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action", 
		"Snapshot=t3.inf", 
		LAST);

	web_add_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"image");

	web_url("sm_dogs.gif", 
		"URL=https://petstore.octoperf.com/images/sm_dogs.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action", 
		"Snapshot=t4.inf", 
		LAST);

	web_add_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"image");

	web_url("logo-topbar.gif", 
		"URL=https://petstore.octoperf.com/images/logo-topbar.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action", 
		"Snapshot=t5.inf", 
		LAST);

	web_add_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"image");

	web_url("cart.gif", 
		"URL=https://petstore.octoperf.com/images/cart.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action", 
		"Snapshot=t6.inf", 
		LAST);

	web_add_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"image");

	web_url("sm_fish.gif", 
		"URL=https://petstore.octoperf.com/images/sm_fish.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action", 
		"Snapshot=t7.inf", 
		LAST);

	web_add_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"image");

	web_url("fish_icon.gif", 
		"URL=https://petstore.octoperf.com/images/fish_icon.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action", 
		"Snapshot=t8.inf", 
		LAST);

	web_add_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"image");

	web_url("dogs_icon.gif", 
		"URL=https://petstore.octoperf.com/images/dogs_icon.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action", 
		"Snapshot=t9.inf", 
		LAST);

	web_add_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"image");

	web_url("sm_birds.gif", 
		"URL=https://petstore.octoperf.com/images/sm_birds.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action", 
		"Snapshot=t10.inf", 
		LAST);

	web_add_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"image");

	web_url("splash.gif", 
		"URL=https://petstore.octoperf.com/images/splash.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action", 
		"Snapshot=t11.inf", 
		LAST);

	web_add_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"image");

	web_url("reptiles_icon.gif", 
		"URL=https://petstore.octoperf.com/images/reptiles_icon.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action", 
		"Snapshot=t12.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_header("Sec-Fetch-Dest", 
		"document");

	lr_think_time(33);

	web_url("Sign In", 
		"URL=https://petstore.octoperf.com/actions/Account.action;jsessionid=A1BADC30BEDD427E6B6FED301115A01F?signonForm=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action", 
		"Snapshot=t13.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"image");

	web_concurrent_start(NULL);

	web_url("sm_reptiles.gif", 
		"URL=https://petstore.octoperf.com/images/sm_reptiles.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action", 
		"Snapshot=t14.inf", 
		LAST);

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"image");

	web_url("sm_cats.gif", 
		"URL=https://petstore.octoperf.com/images/sm_cats.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://petstore.octoperf.com/actions/Account.action;jsessionid=A1BADC30BEDD427E6B6FED301115A01F?signonForm=", 
		"Snapshot=t15.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_revert_auto_header("Sec-Fetch-User");

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	lr_think_time(5);

	web_url("birds_icon.gif", 
		"URL=https://petstore.octoperf.com/images/birds_icon.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action", 
		"Snapshot=t16.inf", 
		LAST);

	web_url("sm_cats.gif_2", 
		"URL=https://petstore.octoperf.com/images/sm_cats.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action", 
		"Snapshot=t17.inf", 
		LAST);

	web_url("cats_icon.gif", 
		"URL=https://petstore.octoperf.com/images/cats_icon.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action", 
		"Snapshot=t18.inf", 
		LAST);

	web_url("sm_reptiles.gif_2", 
		"URL=https://petstore.octoperf.com/images/sm_reptiles.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://petstore.octoperf.com/actions/Account.action;jsessionid=A1BADC30BEDD427E6B6FED301115A01F?signonForm=", 
		"Snapshot=t19.inf", 
		LAST);

	web_add_header("Origin", 
		"https://petstore.octoperf.com");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-User", 
		"?1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_submit_data("Account.action", 
		"Action=https://petstore.octoperf.com/actions/Account.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Account.action;jsessionid=A1BADC30BEDD427E6B6FED301115A01F?signonForm=", 
		"Snapshot=t20.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=username", "Value=jojo", ENDITEM, 
		"Name=password", "Value=bean", ENDITEM, 
		"Name=signon", "Value=Login", ENDITEM, 
		"Name=_sourcePage", "Value={c_sourcecode}", ENDITEM, 
		"Name=__fp", "Value={c__fp}", ENDITEM, 
		LAST);

	web_concurrent_start(NULL);

	web_url("cats_icon.gif_2", 
		"URL=https://petstore.octoperf.com/images/cats_icon.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action", 
		"Snapshot=t21.inf", 
		LAST);

	web_url("birds_icon.gif_2", 
		"URL=https://petstore.octoperf.com/images/birds_icon.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action", 
		"Snapshot=t22.inf", 
		LAST);

	web_concurrent_end(NULL);

	lr_think_time(12);

	web_url("Sign Out", 
		"URL=https://petstore.octoperf.com/actions/Account.action?signoff=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action", 
		"Snapshot=t23.inf", 
		"Mode=HTTP", 
		LAST);

	return 0;
}