TC_11_click_proceed_cart()
{

	web_add_header("Accept-Language", 
		"en-US,en;q=0.5");

	lr_think_time(6);

	web_url("Order.action", 
		"URL=https://petstore.octoperf.com/actions/Order.action?newOrderForm=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Cart.action?removeItemFromCart=&workingItemId=EST-8", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}
