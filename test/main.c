#include "cepresso.h"

void cb(cepresso_req* req, cepresso_res* res)
{
  res->status(req,200);
  res->set(req,"content-type", "text/html");
  res->send(req,"<h1>Hello World</h1>");
}

int main()
{
	cepresso* app;
  	app = cepresso_init();
	app->get("/", cb);
	app->listen(app,3000);
	return 0;
}