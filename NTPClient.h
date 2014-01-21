#ifndef NTPClIENT_H
#define NTPCLIENT_H

#include <string>
#include <iostream>

//Components of the Boost Library
#include <boost/array.hpp>
#include <boost/asio.hpp>

using namespace std;

namespace MultipleKinectsPlatformServer{
	
	/**
	*  A Network Time Protocol Client that queries the DateTime from the Time Server located at hostname
	*/
	class NTPClient{
		private:
			string _host_name;
			unsigned short _port;
		public:
			NTPClient(string i_hostname);
			long RequestDatetime_UNIX();
	};

}

#endif