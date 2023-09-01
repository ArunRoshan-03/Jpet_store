TC_13_click_signout_link()
{
	lr_start_transaction("TC_13_click_signout_link");

	web_url("Account.action_2", 
		"URL={scheme}://{base_url}/{path}/Account.action?signoff=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={scheme}://{base_url}/{path}/Order.action?newOrder=&confirmed=true", 
		"Snapshot=t39.inf", 
		"Mode=HTML", 
		LAST);
	lr_think_time(think_time);
	lr_end_transaction("TC_13_click_signout_link", LR_AUTO);
	return 0;
}