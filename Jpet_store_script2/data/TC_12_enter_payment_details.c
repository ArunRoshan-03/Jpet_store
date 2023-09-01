TC_12_enter_payment_details()
{

	web_add_header("Accept-Language", 
		"en-US,en;q=0.5");

	lr_think_time(8);

	web_submit_data("Order.action_2", 
		"Action=https://petstore.octoperf.com/actions/Order.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Order.action?newOrderForm=", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=order.cardType", "Value=Visa", ENDITEM, 
		"Name=order.creditCard", "Value=999 9999 9999 9999", ENDITEM, 
		"Name=order.expiryDate", "Value=12/03", ENDITEM, 
		"Name=order.billToFirstName", "Value=ABC", ENDITEM, 
		"Name=order.billToLastName", "Value=XYX", ENDITEM, 
		"Name=order.billAddress1", "Value=901 San Antonio Road", ENDITEM, 
		"Name=order.billAddress2", "Value=MS UCUP02-206", ENDITEM, 
		"Name=order.billCity", "Value=Palo Alto", ENDITEM, 
		"Name=order.billState", "Value=CA", ENDITEM, 
		"Name=order.billZip", "Value=94303", ENDITEM, 
		"Name=order.billCountry", "Value=USA", ENDITEM, 
		"Name=newOrder", "Value=Continue", ENDITEM, 
		"Name=_sourcePage", "Value=fxbIY3DKLylB1JHWQU21Y40SN3sZqQEL6Jxpqjm1EQx_KCc85l2M4RIssJfwHbY1EdV9c19oNUs7F2PewoBPXjrLOEmO1kZEtO47dMk5oXs=", ENDITEM, 
		"Name=__fp", "Value=YXSz3rv9MAXcck7Qg42GSTfMkr_EPcYt-yv7aUIRFGG-q31ELRgHIdGX_4QDs76l4i2z-fQL5d1ucRVpZywT_NAaBYmVJIheDmNzfR2lxu-STkbpB0_iog==", ENDITEM, 
		LAST);

	return 0;
}
