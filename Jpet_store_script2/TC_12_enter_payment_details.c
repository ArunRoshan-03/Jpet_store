TC_12_enter_payment_details()
{
lr_start_transaction("TC_12_enter_payment_details");

	web_add_header("Accept-Language", 
		"en-US,en;q=0.5");

	web_submit_data("Order.action_2", 
		"Action={scheme}//{base_url}/Order.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer={scheme}//{base_url}/Order.action?newOrderForm=", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=order.cardType", "Value={P_cardType}", ENDITEM, 
		"Name=order.creditCard", "Value=999 9999 9999 {P_cretid_cardno}", ENDITEM, 
		"Name=order.expiryDate", "Value={P_exp_date}", ENDITEM, 
		"Name=order.billToFirstName", "Value={P_first_name}", ENDITEM, 
		"Name=order.billToLastName", "Value=XYX", ENDITEM, 
		"Name=order.billAddress1", "Value=901 San Antonio Road", ENDITEM, 
		"Name=order.billAddress2", "Value=MS UCUP02-206", ENDITEM, 
		"Name=order.billCity", "Value=Palo Alto", ENDITEM, 
		"Name=order.billState", "Value=CA", ENDITEM, 
		"Name=order.billZip", "Value={zip_code}", ENDITEM, 
		"Name=order.billCountry", "Value=USA", ENDITEM, 
		"Name=newOrder", "Value=Continue", ENDITEM, 
		"Name=_sourcePage", "Value={C_check_out_sourcePage}", ENDITEM, 
		"Name=__fp", "Value={C_check_out_fp}", ENDITEM, 
		LAST);

lr_end_transaction("TC_12_enter_payment_details", LR_AUTO);
	lr_think_time(think_time);
	return 0;
}
