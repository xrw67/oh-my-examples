// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: hello.proto
#ifndef GRPC_hello_2eproto__INCLUDED
#define GRPC_hello_2eproto__INCLUDED

#include "hello.pb.h"

#include <functional>
#include <grpcpp/generic/async_generic_service.h>
#include <grpcpp/support/async_stream.h>
#include <grpcpp/support/async_unary_call.h>
#include <grpcpp/support/client_callback.h>
#include <grpcpp/client_context.h>
#include <grpcpp/completion_queue.h>
#include <grpcpp/support/message_allocator.h>
#include <grpcpp/support/method_handler.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/rpc_method.h>
#include <grpcpp/support/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/server_context.h>
#include <grpcpp/impl/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/support/stub_options.h>
#include <grpcpp/support/sync_stream.h>

namespace hello {

class HelloService final {
 public:
  static constexpr char const* service_full_name() {
    return "hello.HelloService";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status Get(::grpc::ClientContext* context, const ::hello::GetRequest& request, ::hello::GetResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::hello::GetResponse>> AsyncGet(::grpc::ClientContext* context, const ::hello::GetRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::hello::GetResponse>>(AsyncGetRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::hello::GetResponse>> PrepareAsyncGet(::grpc::ClientContext* context, const ::hello::GetRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::hello::GetResponse>>(PrepareAsyncGetRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientWriterInterface< ::hello::PostRequest>> Post(::grpc::ClientContext* context, ::hello::PostResponse* response) {
      return std::unique_ptr< ::grpc::ClientWriterInterface< ::hello::PostRequest>>(PostRaw(context, response));
    }
    std::unique_ptr< ::grpc::ClientAsyncWriterInterface< ::hello::PostRequest>> AsyncPost(::grpc::ClientContext* context, ::hello::PostResponse* response, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncWriterInterface< ::hello::PostRequest>>(AsyncPostRaw(context, response, cq, tag));
    }
    std::unique_ptr< ::grpc::ClientAsyncWriterInterface< ::hello::PostRequest>> PrepareAsyncPost(::grpc::ClientContext* context, ::hello::PostResponse* response, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncWriterInterface< ::hello::PostRequest>>(PrepareAsyncPostRaw(context, response, cq));
    }
    class async_interface {
     public:
      virtual ~async_interface() {}
      virtual void Get(::grpc::ClientContext* context, const ::hello::GetRequest* request, ::hello::GetResponse* response, std::function<void(::grpc::Status)>) = 0;
      virtual void Get(::grpc::ClientContext* context, const ::hello::GetRequest* request, ::hello::GetResponse* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      virtual void Post(::grpc::ClientContext* context, ::hello::PostResponse* response, ::grpc::ClientWriteReactor< ::hello::PostRequest>* reactor) = 0;
    };
    typedef class async_interface experimental_async_interface;
    virtual class async_interface* async() { return nullptr; }
    class async_interface* experimental_async() { return async(); }
   private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::hello::GetResponse>* AsyncGetRaw(::grpc::ClientContext* context, const ::hello::GetRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::hello::GetResponse>* PrepareAsyncGetRaw(::grpc::ClientContext* context, const ::hello::GetRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientWriterInterface< ::hello::PostRequest>* PostRaw(::grpc::ClientContext* context, ::hello::PostResponse* response) = 0;
    virtual ::grpc::ClientAsyncWriterInterface< ::hello::PostRequest>* AsyncPostRaw(::grpc::ClientContext* context, ::hello::PostResponse* response, ::grpc::CompletionQueue* cq, void* tag) = 0;
    virtual ::grpc::ClientAsyncWriterInterface< ::hello::PostRequest>* PrepareAsyncPostRaw(::grpc::ClientContext* context, ::hello::PostResponse* response, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());
    ::grpc::Status Get(::grpc::ClientContext* context, const ::hello::GetRequest& request, ::hello::GetResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::hello::GetResponse>> AsyncGet(::grpc::ClientContext* context, const ::hello::GetRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::hello::GetResponse>>(AsyncGetRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::hello::GetResponse>> PrepareAsyncGet(::grpc::ClientContext* context, const ::hello::GetRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::hello::GetResponse>>(PrepareAsyncGetRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientWriter< ::hello::PostRequest>> Post(::grpc::ClientContext* context, ::hello::PostResponse* response) {
      return std::unique_ptr< ::grpc::ClientWriter< ::hello::PostRequest>>(PostRaw(context, response));
    }
    std::unique_ptr< ::grpc::ClientAsyncWriter< ::hello::PostRequest>> AsyncPost(::grpc::ClientContext* context, ::hello::PostResponse* response, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncWriter< ::hello::PostRequest>>(AsyncPostRaw(context, response, cq, tag));
    }
    std::unique_ptr< ::grpc::ClientAsyncWriter< ::hello::PostRequest>> PrepareAsyncPost(::grpc::ClientContext* context, ::hello::PostResponse* response, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncWriter< ::hello::PostRequest>>(PrepareAsyncPostRaw(context, response, cq));
    }
    class async final :
      public StubInterface::async_interface {
     public:
      void Get(::grpc::ClientContext* context, const ::hello::GetRequest* request, ::hello::GetResponse* response, std::function<void(::grpc::Status)>) override;
      void Get(::grpc::ClientContext* context, const ::hello::GetRequest* request, ::hello::GetResponse* response, ::grpc::ClientUnaryReactor* reactor) override;
      void Post(::grpc::ClientContext* context, ::hello::PostResponse* response, ::grpc::ClientWriteReactor< ::hello::PostRequest>* reactor) override;
     private:
      friend class Stub;
      explicit async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class async* async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class async async_stub_{this};
    ::grpc::ClientAsyncResponseReader< ::hello::GetResponse>* AsyncGetRaw(::grpc::ClientContext* context, const ::hello::GetRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::hello::GetResponse>* PrepareAsyncGetRaw(::grpc::ClientContext* context, const ::hello::GetRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientWriter< ::hello::PostRequest>* PostRaw(::grpc::ClientContext* context, ::hello::PostResponse* response) override;
    ::grpc::ClientAsyncWriter< ::hello::PostRequest>* AsyncPostRaw(::grpc::ClientContext* context, ::hello::PostResponse* response, ::grpc::CompletionQueue* cq, void* tag) override;
    ::grpc::ClientAsyncWriter< ::hello::PostRequest>* PrepareAsyncPostRaw(::grpc::ClientContext* context, ::hello::PostResponse* response, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_Get_;
    const ::grpc::internal::RpcMethod rpcmethod_Post_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status Get(::grpc::ServerContext* context, const ::hello::GetRequest* request, ::hello::GetResponse* response);
    virtual ::grpc::Status Post(::grpc::ServerContext* context, ::grpc::ServerReader< ::hello::PostRequest>* reader, ::hello::PostResponse* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_Get : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_Get() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_Get() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Get(::grpc::ServerContext* /*context*/, const ::hello::GetRequest* /*request*/, ::hello::GetResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGet(::grpc::ServerContext* context, ::hello::GetRequest* request, ::grpc::ServerAsyncResponseWriter< ::hello::GetResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_Post : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_Post() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_Post() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Post(::grpc::ServerContext* /*context*/, ::grpc::ServerReader< ::hello::PostRequest>* /*reader*/, ::hello::PostResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestPost(::grpc::ServerContext* context, ::grpc::ServerAsyncReader< ::hello::PostResponse, ::hello::PostRequest>* reader, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncClientStreaming(1, context, reader, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_Get<WithAsyncMethod_Post<Service > > AsyncService;
  template <class BaseClass>
  class WithCallbackMethod_Get : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_Get() {
      ::grpc::Service::MarkMethodCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::hello::GetRequest, ::hello::GetResponse>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::hello::GetRequest* request, ::hello::GetResponse* response) { return this->Get(context, request, response); }));}
    void SetMessageAllocatorFor_Get(
        ::grpc::MessageAllocator< ::hello::GetRequest, ::hello::GetResponse>* allocator) {
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(0);
      static_cast<::grpc::internal::CallbackUnaryHandler< ::hello::GetRequest, ::hello::GetResponse>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~WithCallbackMethod_Get() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Get(::grpc::ServerContext* /*context*/, const ::hello::GetRequest* /*request*/, ::hello::GetResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* Get(
      ::grpc::CallbackServerContext* /*context*/, const ::hello::GetRequest* /*request*/, ::hello::GetResponse* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithCallbackMethod_Post : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_Post() {
      ::grpc::Service::MarkMethodCallback(1,
          new ::grpc::internal::CallbackClientStreamingHandler< ::hello::PostRequest, ::hello::PostResponse>(
            [this](
                   ::grpc::CallbackServerContext* context, ::hello::PostResponse* response) { return this->Post(context, response); }));
    }
    ~WithCallbackMethod_Post() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Post(::grpc::ServerContext* /*context*/, ::grpc::ServerReader< ::hello::PostRequest>* /*reader*/, ::hello::PostResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerReadReactor< ::hello::PostRequest>* Post(
      ::grpc::CallbackServerContext* /*context*/, ::hello::PostResponse* /*response*/)  { return nullptr; }
  };
  typedef WithCallbackMethod_Get<WithCallbackMethod_Post<Service > > CallbackService;
  typedef CallbackService ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_Get : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_Get() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_Get() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Get(::grpc::ServerContext* /*context*/, const ::hello::GetRequest* /*request*/, ::hello::GetResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_Post : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_Post() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_Post() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Post(::grpc::ServerContext* /*context*/, ::grpc::ServerReader< ::hello::PostRequest>* /*reader*/, ::hello::PostResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_Get : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_Get() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_Get() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Get(::grpc::ServerContext* /*context*/, const ::hello::GetRequest* /*request*/, ::hello::GetResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGet(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_Post : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_Post() {
      ::grpc::Service::MarkMethodRaw(1);
    }
    ~WithRawMethod_Post() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Post(::grpc::ServerContext* /*context*/, ::grpc::ServerReader< ::hello::PostRequest>* /*reader*/, ::hello::PostResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestPost(::grpc::ServerContext* context, ::grpc::ServerAsyncReader< ::grpc::ByteBuffer, ::grpc::ByteBuffer>* reader, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncClientStreaming(1, context, reader, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_Get : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_Get() {
      ::grpc::Service::MarkMethodRawCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->Get(context, request, response); }));
    }
    ~WithRawCallbackMethod_Get() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Get(::grpc::ServerContext* /*context*/, const ::hello::GetRequest* /*request*/, ::hello::GetResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* Get(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_Post : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_Post() {
      ::grpc::Service::MarkMethodRawCallback(1,
          new ::grpc::internal::CallbackClientStreamingHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, ::grpc::ByteBuffer* response) { return this->Post(context, response); }));
    }
    ~WithRawCallbackMethod_Post() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Post(::grpc::ServerContext* /*context*/, ::grpc::ServerReader< ::hello::PostRequest>* /*reader*/, ::hello::PostResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerReadReactor< ::grpc::ByteBuffer>* Post(
      ::grpc::CallbackServerContext* /*context*/, ::grpc::ByteBuffer* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_Get : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_Get() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler<
          ::hello::GetRequest, ::hello::GetResponse>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::hello::GetRequest, ::hello::GetResponse>* streamer) {
                       return this->StreamedGet(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_Get() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status Get(::grpc::ServerContext* /*context*/, const ::hello::GetRequest* /*request*/, ::hello::GetResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedGet(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::hello::GetRequest,::hello::GetResponse>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_Get<Service > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_Get<Service > StreamedService;
};

}  // namespace hello


#endif  // GRPC_hello_2eproto__INCLUDED