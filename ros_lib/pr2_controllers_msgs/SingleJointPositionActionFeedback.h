#ifndef _ROS_pr2_controllers_msgs_SingleJointPositionActionFeedback_h
#define _ROS_pr2_controllers_msgs_SingleJointPositionActionFeedback_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"
#include "actionlib_msgs/GoalStatus.h"
#include "pr2_controllers_msgs/SingleJointPositionFeedback.h"

namespace pr2_controllers_msgs
{

  class SingleJointPositionActionFeedback : public ros::Msg
  {
    public:
      typedef std_msgs::Header _header_type;
      _header_type header;
      typedef actionlib_msgs::GoalStatus _status_type;
      _status_type status;
      typedef pr2_controllers_msgs::SingleJointPositionFeedback _feedback_type;
      _feedback_type feedback;

    SingleJointPositionActionFeedback():
      header(),
      status(),
      feedback()
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      offset += this->status.serialize(outbuffer + offset);
      offset += this->feedback.serialize(outbuffer + offset);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      offset += this->status.deserialize(inbuffer + offset);
      offset += this->feedback.deserialize(inbuffer + offset);
     return offset;
    }

    virtual const char * getType() override { return "pr2_controllers_msgs/SingleJointPositionActionFeedback"; };
    virtual const char * getMD5() override { return "3503b7cf8972f90d245850a5d8796cfa"; };

  };

}
#endif
