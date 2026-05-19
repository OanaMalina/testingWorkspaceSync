vuser_init()
{
	/* Declared in "globals.h" */
	client = mqtt_create();
	
	/* Optional connection settings */
	mqtt_set_client_id(client, "perfcore-pub2-{vuid}");
	mqtt_set_credentials(client, "guest", "guest");
	// mqtt_set_lwt(client, "<topic>", "<sample lwt payload>", MQTT_AUTO, MQTT_DEFAULT, MQTT_RETAIN);
	
	
	/* Optional SSL/TLS settings, applicable for SSL/TLS connections only */
	mqtt_set_tls_certificate(client, "client.crt", "client.key", "password");
	// mqtt_set_tls_parameters(client, MQTT_TLS_DEFAULT, MQTT_DEFAULT_CIPHERS);
	
	/* Connect to an MQTT broker */
	mqtt_connect(client, "ssl://10.199.56.227:8884");
	
	/* Uncomment the following if implementing the "subscriber" logic */
	// mqtt_subscribe(client, "<topic>");
	
	return 0;
}
