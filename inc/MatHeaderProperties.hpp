#ifndef MAT_HEADER_PROPERTY_HPP
#define MAT_HEADER_PROPERTY_HPP

#include "NotCopyable.hpp"
#include "opencv2/core/mat.hpp"

class MatHeaderProperties : public NotCopyable
{
  private:

  public:
    MatHeaderProperties() { /*Empty*/}
    ~MatHeaderProperties() { /*Empty*/}

    inline int GetRefCount(const cv::Mat& m) { return m.u->refcount; }
    inline int GetUrefCount(const cv::Mat& m) { return m.u->urefcount; }
    inline int GetFlags(const cv::Mat& m) { return m.u->flags; }
    inline int GetMapCount(const cv::Mat& m) { return m.u->mapcount; }
    inline int GetSize(const cv::Mat& m) { return m.u->size; }
    inline int GetAllocatorFlags(const cv::Mat& m) { return m.u->allocatorFlags_; }
    inline int GetStepP(const cv::Mat& m) { return  std::static_cast<int*>(m.step.p); }
    inline int GetStepBuff0(const cv::Mat& m) { return  m.step.buf[0]; }
    inline int GetStepBuff1(const cv::Mat& m) { return  m.step.buf[0]; }
};

#endif // MAT_HEADER_PROPERTY_HPP
