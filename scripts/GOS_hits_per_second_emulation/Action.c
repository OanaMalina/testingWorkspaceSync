Action()
{
	lr_think_time(2);

    lr_start_transaction("TRX_01");

// web page download simulation

	lr_user_data_point("tcp_connect", 3);			// new connections
	lr_user_data_point("tcp_connection_count", 1);	// currently open connections
	lr_user_data_point("mic_recv", 10884);			// downloaded bytes (throughput);
	lr_user_data_point("HTTP_200", 5);				// successful responses
	lr_user_data_point("HTTP_304", 2);				// not modified responses
	lr_user_data_point("HTTP_404", 1);				// error responses
	lr_user_data_point("HTTP_302", 1);				// redirection responses
	lr_user_data_point("tcp_shutdown", 2);			// closed connections

// -------------------------------------------------------------------------------

	lr_end_transaction("TRX_01",LR_AUTO);

	lr_think_time(3);

    lr_start_transaction("TRX_02");

    // web page download simulation

	lr_user_data_point("tcp_connect", 1);			// new connections
	lr_user_data_point("tcp_connection_count", 0);	// currently open connections
	lr_user_data_point("mic_recv", 120884);			// downloaded bytes (throughput);
	lr_user_data_point("HTTP_200", 2);				// successful responses
	lr_user_data_point("HTTP_304", 4);				// not modified responses
	lr_user_data_point("tcp_shutdown", 3);			// closed connections

// -------------------------------------------------------------------------------


    lr_end_transaction("TRX_02",LR_AUTO);


	return 0;
}
