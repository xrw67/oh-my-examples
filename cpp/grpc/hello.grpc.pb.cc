// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: hello.proto

#include "hello.pb.h"
#include "hello.grpc.pb.h"

#include <functional>
#include <grpcpp/support/async_stream.h>
#include <grpcpp/support/async_unary_call.h>
#include <grpcpp/impl/channel_interface.h>
#include <grpcpp/impl/client_unary_call.h>
#include <grpcpp/support/client_callback.h>
#include <grpcpp/support/message_allocator.h>
#include <grpcpp/support/method_handler.h>
#include <grpcpp/impl/rpc_service_method.h>
#include <grpcpp/support/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/server_context.h>
#include <grpcpp/impl/service_type.h>
#include <grpcpp/support/sync_stream.h>
namespace hello {

static const char* HelloService_method_names[] = {
  "/hello.HelloService/Get",
  "/hello.HelloService/Post",
};

std::unique_ptr< HelloService::Stub> HelloService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< HelloService::Stub> stub(new HelloService::Stub(channel, options));
  return stub;
}

HelloService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_Get_(HelloService_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Post_(HelloService_method_names[1], options.suffix_for_stats(),::grpc::internal::RpcMethod::CLIENT_STREAMING, channel)
  {}

::grpc::Status HelloService::Stub::Get(::grpc::ClientContext* context, const ::hello::GetRequest& request, ::hello::GetResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::hello::GetRequest, ::hello::GetResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_Get_, context, request, response);
}

void HelloService::Stub::async::Get(::grpc::ClientContext* context, const ::hello::GetRequest* request, ::hello::GetResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::hello::GetRequest, ::hello::GetResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Get_, context, request, response, std::move(f));
}

void HelloService::Stub::async::Get(::grpc::ClientContext* context, const ::hello::GetRequest* request, ::hello::GetResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Get_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::hello::GetResponse>* HelloService::Stub::PrepareAsyncGetRaw(::grpc::ClientContext* context, const ::hello::GetRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::hello::GetResponse, ::hello::GetRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_Get_, context, request);
}

::grpc::ClientAsyncResponseReader< ::hello::GetResponse>* HelloService::Stub::AsyncGetRaw(::grpc::ClientContext* context, const ::hello::GetRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncGetRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::ClientWriter< ::hello::PostRequest>* HelloService::Stub::PostRaw(::grpc::ClientContext* context, ::hello::PostResponse* response) {
  return ::grpc::internal::ClientWriterFactory< ::hello::PostRequest>::Create(channel_.get(), rpcmethod_Post_, context, response);
}

void HelloService::Stub::async::Post(::grpc::ClientContext* context, ::hello::PostResponse* response, ::grpc::ClientWriteReactor< ::hello::PostRequest>* reactor) {
  ::grpc::internal::ClientCallbackWriterFactory< ::hello::PostRequest>::Create(stub_->channel_.get(), stub_->rpcmethod_Post_, context, response, reactor);
}

::grpc::ClientAsyncWriter< ::hello::PostRequest>* HelloService::Stub::AsyncPostRaw(::grpc::ClientContext* context, ::hello::PostResponse* response, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncWriterFactory< ::hello::PostRequest>::Create(channel_.get(), cq, rpcmethod_Post_, context, response, true, tag);
}

::grpc::ClientAsyncWriter< ::hello::PostRequest>* HelloService::Stub::PrepareAsyncPostRaw(::grpc::ClientContext* context, ::hello::PostResponse* response, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncWriterFactory< ::hello::PostRequest>::Create(channel_.get(), cq, rpcmethod_Post_, context, response, false, nullptr);
}

HelloService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      HelloService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< HelloService::Service, ::hello::GetRequest, ::hello::GetResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](HelloService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::hello::GetRequest* req,
             ::hello::GetResponse* resp) {
               return service->Get(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      HelloService_method_names[1],
      ::grpc::internal::RpcMethod::CLIENT_STREAMING,
      new ::grpc::internal::ClientStreamingHandler< HelloService::Service, ::hello::PostRequest, ::hello::PostResponse>(
          [](HelloService::Service* service,
             ::grpc::ServerContext* ctx,
             ::grpc::ServerReader<::hello::PostRequest>* reader,
             ::hello::PostResponse* resp) {
               return service->Post(ctx, reader, resp);
             }, this)));
}

HelloService::Service::~Service() {
}

::grpc::Status HelloService::Service::Get(::grpc::ServerContext* context, const ::hello::GetRequest* request, ::hello::GetResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status HelloService::Service::Post(::grpc::ServerContext* context, ::grpc::ServerReader< ::hello::PostRequest>* reader, ::hello::PostResponse* response) {
  (void) context;
  (void) reader;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace hello

