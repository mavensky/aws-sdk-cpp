/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iam/model/ResponseMetadata.h>
#include <aws/iam/model/Role.h>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace IAM
{
namespace Model
{
  /*
    <p>Contains the response to a successful <a>ListRoles</a> request. </p>
  */
  class AWS_IAM_API ListRolesResult
  {
  public:
    ListRolesResult();
    ListRolesResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    ListRolesResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /*
     <p>A list of roles.</p>
    */
    inline const Aws::Vector<Role>& GetRoles() const{ return m_roles; }
    /*
     <p>A list of roles.</p>
    */
    inline void SetRoles(const Aws::Vector<Role>& value) { m_roles = value; }

    /*
     <p>A list of roles.</p>
    */
    inline ListRolesResult&  WithRoles(const Aws::Vector<Role>& value) { SetRoles(value); return *this;}

    /*
     <p>A list of roles.</p>
    */
    inline ListRolesResult& AddRoles(const Role& value) { m_roles.push_back(value); return *this; }

    /*
     <p>A flag that indicates whether there are more items to return. If your results were truncated, you can make a subsequent pagination request using the <code>Marker</code> request parameter to retrieve more items.</p>
    */
    inline bool GetIsTruncated() const{ return m_isTruncated; }
    /*
     <p>A flag that indicates whether there are more items to return. If your results were truncated, you can make a subsequent pagination request using the <code>Marker</code> request parameter to retrieve more items.</p>
    */
    inline void SetIsTruncated(bool value) { m_isTruncated = value; }

    /*
     <p>A flag that indicates whether there are more items to return. If your results were truncated, you can make a subsequent pagination request using the <code>Marker</code> request parameter to retrieve more items.</p>
    */
    inline ListRolesResult&  WithIsTruncated(bool value) { SetIsTruncated(value); return *this;}

    /*
     <p>When <code>IsTruncated</code> is <code>true</code>, this element is present and contains the value to use for the <code>Marker</code> parameter in a subsequent pagination request.</p>
    */
    inline const Aws::String& GetMarker() const{ return m_marker; }
    /*
     <p>When <code>IsTruncated</code> is <code>true</code>, this element is present and contains the value to use for the <code>Marker</code> parameter in a subsequent pagination request.</p>
    */
    inline void SetMarker(const Aws::String& value) { m_marker = value; }

    /*
     <p>When <code>IsTruncated</code> is <code>true</code>, this element is present and contains the value to use for the <code>Marker</code> parameter in a subsequent pagination request.</p>
    */
    inline void SetMarker(const char* value) { m_marker.assign(value); }

    /*
     <p>When <code>IsTruncated</code> is <code>true</code>, this element is present and contains the value to use for the <code>Marker</code> parameter in a subsequent pagination request.</p>
    */
    inline ListRolesResult&  WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /*
     <p>When <code>IsTruncated</code> is <code>true</code>, this element is present and contains the value to use for the <code>Marker</code> parameter in a subsequent pagination request.</p>
    */
    inline ListRolesResult& WithMarker(const char* value) { SetMarker(value); return *this;}

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline ListRolesResult&  WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

  private:
    Aws::Vector<Role> m_roles;
    bool m_isTruncated;
    Aws::String m_marker;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws