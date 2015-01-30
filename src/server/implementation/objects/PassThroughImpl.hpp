/* Autogenerated with kurento-module-creator */

#ifndef __PASS_THROUGH_IMPL_HPP__
#define __PASS_THROUGH_IMPL_HPP__

#include "MediaElementImpl.hpp"
#include "PassThrough.hpp"
#include <EventHandler.hpp>
#include <boost/property_tree/ptree.hpp>

namespace kurento
{
class PassThroughImpl;
} /* kurento */

namespace kurento
{
void Serialize (std::shared_ptr<kurento::PassThroughImpl> &object,
                JsonSerializer &serializer);
} /* kurento */

namespace kurento
{
class MediaPipelineImpl;
} /* kurento */

namespace kurento
{

class PassThroughImpl : public MediaElementImpl, public virtual PassThrough
{

public:

  PassThroughImpl (const boost::property_tree::ptree &config,
                   std::shared_ptr<MediaPipeline> mediaPipeline);

  virtual ~PassThroughImpl () {};

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

#endif /*  __PASS_THROUGH_IMPL_HPP__ */