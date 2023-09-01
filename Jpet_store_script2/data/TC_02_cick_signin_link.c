TC_02_cick_signin_link()
{

	web_add_header("Accept-Language", 
		"en-US,en;q=0.5");

	lr_think_time(5);

	web_url("Account.action;jsessionid=8657F79E9780EAB6CC6F96E4D926997C", 
		"URL=https://petstore.octoperf.com/actions/Account.action;jsessionid=8657F79E9780EAB6CC6F96E4D926997C?signonForm=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}
