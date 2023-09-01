TC_08_fill_quantity()
{

	web_add_header("Accept-Language", 
		"en-US,en;q=0.5");

	lr_think_time(22);

	web_submit_data("Cart.action_2", 
		"Action=https://petstore.octoperf.com/actions/Cart.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Cart.action?addItemToCart=&workingItemId=EST-8", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=EST-8", "Value=4", ENDITEM, 
		"Name=updateCartQuantities", "Value=Update Cart", ENDITEM, 
		"Name=_sourcePage", "Value=RjVOy7WipZ4jaUWlOf-EnOWMQE5SgksaT91B7RvN2RGZNtyYIRVDMff4Bl_7Tw-Gj3V2KOWxSKYcTx3V1cM_cZ5qho4_H9qI", ENDITEM, 
		"Name=__fp", "Value=8_j-0yWQkDlzhywrlysxBSbhhKJGC5J4MKebIssLnNcWRzAg7merbd1SJbrB4TFm", ENDITEM, 
		LAST);

	return 0;
}
