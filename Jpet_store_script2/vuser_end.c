vuser_end()
{

	web_add_header("Accept-Language", 
		"en-US,en;q=0.5");

	web_url("Account.action_2", 
		"URL={scheme}//{base_url}/Account.action?signoff=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={scheme}//{base_url}/Order.action?newOrder=&confirmed=true", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}