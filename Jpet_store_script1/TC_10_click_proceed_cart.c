TC_10_click_proceed_cart()
{
	lr_start_transaction("TC_10_click_proceed_cart");


	web_reg_save_param_ex(
		"ParamName=C_check_out_sourcePage",
		"LB=name=\"_sourcePage\" value=\"",
		"RB=\"",
		"Ordinal=2",
		SEARCH_FILTERS,
		"Scope=Body",
		LAST);
	
	web_reg_save_param_ex(
		"ParamName=C_check_out_fp",
		"LB=name=\"__fp\" value=\"",
		"RB=\"",
		"Ordinal=2",
		SEARCH_FILTERS,
		"Scope=Body",
		LAST);
/*Correlation comment - Do not change!  Original value='Visa' Name ='C_cardType' Type ='Manual'*/
	web_reg_save_param_ex(
		"ParamName=C_cardType",
		"LB=option value=\"",
		"RB=\"",
		"Ordinal=All",
		SEARCH_FILTERS,
		"Scope=Body",
		LAST);

	web_url("Order.action", 
		"URL={scheme}://{base_url}/{path}/Order.action?newOrderForm=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={scheme}://{base_url}/{path}/Cart.action", 
		"Snapshot=t36.inf", 
		"Mode=HTML", 
		LAST);
		random_cardType=lr_paramarr_random("C_cardType");
	lr_param_sprintf("P_random_cardType","%s",random_cardType);

	lr_think_time(think_time);
	lr_end_transaction("TC_10_click_proceed_cart", LR_AUTO);
	return 0;
}
