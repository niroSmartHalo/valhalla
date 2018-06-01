#ifndef TEST_ADDONS_NAPI_6_OBJECT_WRAP_MYOBJECT_H_
#define TEST_ADDONS_NAPI_6_OBJECT_WRAP_MYOBJECT_H_

#include <node_api.h>

class Actor {
 public:
  static napi_value Init(napi_env env, napi_value exports);
  static void Destructor(napi_env env, void* nativeObject, void* finalize_hint);

 private:
  explicit Actor(std::string conf_);
  ~Actor();

  static napi_value New(napi_env env, napi_callback_info info);
  // static napi_value GetValue(napi_env env, napi_callback_info info);
  // static napi_value SetValue(napi_env env, napi_callback_info info);
  static napi_value Route(napi_env env, napi_callback_info info);
  static napi_ref constructor;
  std::string conf_;
  napi_env env_;
  napi_ref wrapper_;
};

#endif  // TEST_ADDONS_NAPI_6_OBJECT_WRAP_MYOBJECT_H_
