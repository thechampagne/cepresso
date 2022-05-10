#include "cepresso.h"

void cb(cepresso_req* req, cepresso_res* res)
{
	res->status(res,200);
  	res->set(res,"content-type", "text/html");
  	res->send(res,"<h1>Hello World</h1>");
}

int main()
{
	cepresso* app;
  	app = cepresso_init();
	app->get("/", cb);
	app->listen(app,3000);
}