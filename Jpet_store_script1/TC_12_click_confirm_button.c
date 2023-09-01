TC_12_click_confirm_button()
{

	lr_start_transaction("TC_12_click_confirm_button");


	web_url("Order.action_3", 
		"URL={scheme}://{base_url}/{path}/Order.action?newOrder=&confirmed=true", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={scheme}://{base_url}/{path}/Order.action", 
		"Snapshot=t38.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_think_time(think_time);
	lr_end_transaction("TC_12_click_confirm_button", LR_AUTO);
	return 0;
}
