//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	lr_start_transaction("Transaction 2");
	truclient_step("1", "Navigate to http://opentext.com/", "snapshot=Action_1.inf");
	truclient_step("2", "Click on Accept All Button", "snapshot=Action_2.inf");
	truclient_step("4", "Click on Products Focusable", "snapshot=Action_4.inf");
	truclient_step("6", "Click on Application Modernization Link", "snapshot=Action_6.inf");
	lr_end_transaction("Transaction 2",0);
	return 0;
}
