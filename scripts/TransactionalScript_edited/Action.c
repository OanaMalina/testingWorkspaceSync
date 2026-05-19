Action()
{
	lr_start_transaction("Trans#1");
	lr_end_transaction("Trans#1", LR_PASS);
	
	lr_start_transaction("Trans#1");
	lr_end_transaction("Trans#1", LR_FAIL);
	
	lr_think_time(1);
	
	return 0;
}
