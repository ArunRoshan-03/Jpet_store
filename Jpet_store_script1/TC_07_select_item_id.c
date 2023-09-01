TC_07_select_item_id()
{
	lr_start_transaction("TC_07_select_item_id");
	web_url("Catalog.action_4", 
		"URL={scheme}://{base_url}/{path}/Catalog.action?viewItem=&itemId={P_random_item_id}", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={scheme}://{base_url}/{path}/Catalog.action?viewProduct=&productId={P_random_product_id}", 
		"Snapshot=t32.inf", 
		"Mode=HTML", 
		LAST);
	lr_think_time(think_time);
	lr_end_transaction("TC_07_select_item_id", LR_AUTO);

	return 0;
}
