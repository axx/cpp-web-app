//============================================================================
// Name        : cpp-web-app.cpp
// Author      : Allister Sanchez
// Version     :
// Copyright   : Copyright Allister Sanchez 2019
// Description : A web application written in C++, based on feather.
//============================================================================

#include <cinatra.hpp>

int main() {
  int maximum_thread_number = std::thread::hardware_concurrency();
  cinatra::http_server server(maximum_thread_number);
  server.listen("0.0.0.0", "3000");
  server.set_http_handler<cinatra::GET>("/", [](cinatra::request& request, cinatra::response& response) {
    response.set_status_and_content(cinatra::status_type::ok, "hello world");
  });
  server.run();
  return 0;
}
