/* Autogenerated with kurento-module-creator */

#ifndef __BASE_RTP_ENDPOINT_IMPL_HPP__
#define __BASE_RTP_ENDPOINT_IMPL_HPP__

#include "SdpEndpointImpl.hpp"
#include "BaseRtpEndpoint.hpp"
#include <EventHandler.hpp>
#include <boost/property_tree/ptree.hpp>

namespace kurento
{
class BaseRtpEndpointImpl;
} /* kurento */

namespace kurento
{
void Serialize (std::shared_ptr<kurento::BaseRtpEndpointImpl> &object,
                JsonSerializer &serializer);
} /* kurento */

namespace kurento
{

class BaseRtpEndpointImpl : public SdpEndpointImpl,
  public virtual BaseRtpEndpoint
{

public:

  BaseRtpEndpointImpl (const boost::property_tree::ptree &config,
                       std::shared_ptr< MediaObjectImpl > parent,
                       const std::string &factoryName);

  virtual ~BaseRtpEndpointImpl () {};

  virtual int getMinVideoSendBandwidth ();
  virtual void setMinVideoSendBandwidth (int minVideoSendBandwidth);

  virtual int getMaxVideoSendBandwidth ();
  virtual void setMaxVideoSendBandwidth (int maxVideoSendBandwidth);

  /* Next methods are automatically implemented by code generator */
  virtual bool connect (const std::string &eventType,
                        std::shared_ptr<EventHandler> handler);
  virtual void invoke (std::shared_ptr<MediaObjectImpl> obj,
                       const std::string &methodName, const Json::Value &params,
                       Json::Value &response);

  virtual void Serialize (JsonSerializer &serializer);

private:

  class StaticConstructor
  {
  public:
    StaticConstructor();
  };

  static StaticConstructor staticConstructor;

};

} /* kurento */

#endif /*  __BASE_RTP_ENDPOINT_IMPL_HPP__ */
