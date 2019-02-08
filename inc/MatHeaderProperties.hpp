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
};

#endif // MAT_HEADER_PROPERTY_HPP
