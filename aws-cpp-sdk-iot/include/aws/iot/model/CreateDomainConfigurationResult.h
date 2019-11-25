﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace IoT
{
namespace Model
{
  class AWS_IOT_API CreateDomainConfigurationResult
  {
  public:
    CreateDomainConfigurationResult();
    CreateDomainConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateDomainConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the domain configuration.</p>
     */
    inline const Aws::String& GetDomainConfigurationName() const{ return m_domainConfigurationName; }

    /**
     * <p>The name of the domain configuration.</p>
     */
    inline void SetDomainConfigurationName(const Aws::String& value) { m_domainConfigurationName = value; }

    /**
     * <p>The name of the domain configuration.</p>
     */
    inline void SetDomainConfigurationName(Aws::String&& value) { m_domainConfigurationName = std::move(value); }

    /**
     * <p>The name of the domain configuration.</p>
     */
    inline void SetDomainConfigurationName(const char* value) { m_domainConfigurationName.assign(value); }

    /**
     * <p>The name of the domain configuration.</p>
     */
    inline CreateDomainConfigurationResult& WithDomainConfigurationName(const Aws::String& value) { SetDomainConfigurationName(value); return *this;}

    /**
     * <p>The name of the domain configuration.</p>
     */
    inline CreateDomainConfigurationResult& WithDomainConfigurationName(Aws::String&& value) { SetDomainConfigurationName(std::move(value)); return *this;}

    /**
     * <p>The name of the domain configuration.</p>
     */
    inline CreateDomainConfigurationResult& WithDomainConfigurationName(const char* value) { SetDomainConfigurationName(value); return *this;}


    /**
     * <p>The ARN of the domain configuration.</p>
     */
    inline const Aws::String& GetDomainConfigurationArn() const{ return m_domainConfigurationArn; }

    /**
     * <p>The ARN of the domain configuration.</p>
     */
    inline void SetDomainConfigurationArn(const Aws::String& value) { m_domainConfigurationArn = value; }

    /**
     * <p>The ARN of the domain configuration.</p>
     */
    inline void SetDomainConfigurationArn(Aws::String&& value) { m_domainConfigurationArn = std::move(value); }

    /**
     * <p>The ARN of the domain configuration.</p>
     */
    inline void SetDomainConfigurationArn(const char* value) { m_domainConfigurationArn.assign(value); }

    /**
     * <p>The ARN of the domain configuration.</p>
     */
    inline CreateDomainConfigurationResult& WithDomainConfigurationArn(const Aws::String& value) { SetDomainConfigurationArn(value); return *this;}

    /**
     * <p>The ARN of the domain configuration.</p>
     */
    inline CreateDomainConfigurationResult& WithDomainConfigurationArn(Aws::String&& value) { SetDomainConfigurationArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the domain configuration.</p>
     */
    inline CreateDomainConfigurationResult& WithDomainConfigurationArn(const char* value) { SetDomainConfigurationArn(value); return *this;}

  private:

    Aws::String m_domainConfigurationName;

    Aws::String m_domainConfigurationArn;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
