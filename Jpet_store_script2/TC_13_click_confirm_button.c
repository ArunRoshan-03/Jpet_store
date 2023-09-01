TC_13_click_confirm_button()
{
lr_start_transaction("TC_13_click_confirm_button");

	web_add_header("Accept-Language", 
		"en-US,en;q=0.5");

	web_url("Order.action_3", 
		"URL={scheme}//{base_url}/Order.action?newOrder=&confirmed=true", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={scheme}//{base_url}/Order.action", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		LAST);

lr_end_transaction("TC_13_click_confirm_button", LR_AUTO);
	lr_think_time(think_time);
	return 0;
}
