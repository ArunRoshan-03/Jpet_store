TC_03_enter_sigin_credentails()
{
lr_start_transaction("TC_03_enter_sigin_credentails");

	web_add_header("Accept-Language", 
		"en-US,en;q=0.5");

	web_reg_save_param_regexp(
		"ParamName=C_animals_names",
		"RegExp=&amp;categoryId=(.*?)\">",
		"Ordinal=All",
		SEARCH_FILTERS,
		"Scope=BODY",
		LAST);

	web_submit_data("Account.action", 
		"Action={scheme}//{base_url}/Account.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer={scheme}//{base_url}/Account.action;jsessionid={C_jsession_id}?signonForm=", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=username", "Value={P_username}", ENDITEM, 
		"Name=password", "Value={P_password}", ENDITEM, 
		"Name=signon", "Value=Login", ENDITEM, 
		"Name=_sourcePage", "Value={C_login_sourcepage_id}", ENDITEM, 
		"Name=__fp", "Value={C_login_fp_id}", ENDITEM, 
		LAST);
		
	random_animals_name=lr_paramarr_random("C_animals_names");
	lr_param_sprintf("P_animals_name","%s",random_animals_name);

lr_end_transaction("TC_03_enter_sigin_credentails", LR_AUTO);
	lr_think_time(think_time);
	return 0;
}
