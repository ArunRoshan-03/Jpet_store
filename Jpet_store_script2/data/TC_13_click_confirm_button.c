TC_13_click_confirm_button()
{

	web_add_header("Accept-Language", 
		"en-US,en;q=0.5");

	lr_think_time(5);

	web_url("Order.action_3", 
		"URL=https://petstore.octoperf.com/actions/Order.action?newOrder=&confirmed=true", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Order.action", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}
