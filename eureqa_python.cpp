#include <boost/python.hpp>
#include <boost/scoped_ptr.hpp>
#include <string>
#include <eureqa/connection.h>


#include "Connection.h"
#include "DataSet.h"
#include "SearchOptions.h"
#include "SearchProgress.h"
#include "ServerInfo.h"
#include "SolutionFrontier.h"

class DummyClass
{
	public:
		std::string Test(std::string text)
		{
		    return "Hello " + text;
		}
};



BOOST_PYTHON_MODULE(eureqa_python)
{
	// Connection class
	boost::python::class_<Connection>("Connection")
	.def("send_individuals", &Connection::SendIndividuals)
	;
}



