TC_03_enter_sigin_credentails()
{

	web_add_header("Accept-Language", 
		"en-US,en;q=0.5");

	web_submit_data("Account.action", 
		"Action=https://petstore.octoperf.com/actions/Account.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Account.action;jsessionid=8657F79E9780EAB6CC6F96E4D926997C?signonForm=", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=username", "Value=j2ee", ENDITEM, 
		"Name=password", "Value=j2ee", ENDITEM, 
		"Name=signon", "Value=Login", ENDITEM, 
		"Name=_sourcePage", "Value=BFH6PiHO__ZkA5cy46XyUNtoJT01mvC1YZ0WeZnez0QxEhpgU3RQOF6USf5eobLsVUQHYTYHOcMeBGol0MBg8wEqo9x8f-MuenIDuvnglQY=", ENDITEM, 
		"Name=__fp", "Value=vqz2WOlVni55A3IvbvYWsEdpQYMg964DbeL6fG2cgIWo3WFn15DjU_dGxQ814JYk", ENDITEM, 
		LAST);

	return 0;
}
