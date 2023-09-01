TC_11_enter_payment_details()
{

	lr_start_transaction("TC_11_enter_payment_details");
	
	lr_param_sprintf("P_fakeCreditCard", "4%04d 9876 5432 109%03d", rand() % 10000, rand() % 1000); 
    lr_param_sprintf("P_fakeExpiryDate", "%02d/%02d", rand() % 12 + 1, rand() % 10 + 21);
	lr_param_sprintf("p_zipcode", "%06d", rand() % 1000000);

	web_submit_data("Order.action_2",
		"Action={scheme}://{base_url}/{path}/Order.action",
		"Method=POST",
		"RecContentType=text/html",
		"Referer={scheme}://{base_url}/{path}/Order.action?newOrderForm=",
		"Snapshot=t37.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=order.cardType", "Value={P_random_cardType}", ENDITEM,
		"Name=order.creditCard", "Value={P_fakeCreditCard}", ENDITEM,
		"Name=order.expiryDate", "Value={P_fakeExpiryDate}", ENDITEM,
		"Name=order.billToFirstName", "Value={p_firstname}", ENDITEM,
		"Name=order.billToLastName", "Value={p_lastname}", ENDITEM,
		"Name=order.billAddress1", "Value={p_address}", ENDITEM,
		"Name=order.billAddress2", "Value={p_address}", ENDITEM,
		"Name=order.billCity", "Value={p_city}", ENDITEM,
		"Name=order.billState", "Value={p_state}", ENDITEM,
		"Name=order.billZip", "Value={p_zipcode}", ENDITEM,
		"Name=order.billCountry", "Value={p_county}", ENDITEM,
		"Name=newOrder", "Value=Continue", ENDITEM,
		"Name=_sourcePage", "Value={C_check_out_sourcePage}", ENDITEM,
		"Name=__fp", "Value={C_check_out_fp}", ENDITEM,
		LAST);
	
	lr_think_time(think_time);
	lr_end_transaction("TC_11_enter_payment_details", LR_AUTO);
	return 0;
}
