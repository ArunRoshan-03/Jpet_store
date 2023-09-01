TC_02_cick_signin_link()
{
lr_start_transaction("TC_02_cick_signin_link");

	web_add_header("Accept-Language", 
		"en-US,en;q=0.5");
	
	web_reg_save_param_regexp(
		"ParamName=C_login_sourcepage_id",
		"RegExp=hidden\" name=\"_sourcePage\" value=\"(.*?)\" />",
		"Ordinal=1",
		SEARCH_FILTERS,
		"Scope=BODY",
		LAST);

	web_reg_save_param_regexp(
		"ParamName=C_login_fp_id",
		"RegExp=name=\"__fp\" value=\"(.*?)\" />",
		SEARCH_FILTERS,
		LAST);

	web_url("Account.action;jsessionid={C_jsession_id}", 
		"URL={scheme}//{base_url}/Account.action;jsessionid={C_jsession_id}?signonForm=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={scheme}//{base_url}/Catalog.action", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);
lr_end_transaction("TC_02_cick_signin_link", LR_AUTO);
	lr_think_time(think_time);
	return 0;
}
