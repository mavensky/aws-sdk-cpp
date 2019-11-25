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
#include <aws/iotsecuretunneling/IoTSecureTunneling_EXPORTS.h>
#include <aws/iotsecuretunneling/model/Tunnel.h>
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
namespace IoTSecureTunneling
{
namespace Model
{
  class AWS_IOTSECURETUNNELING_API DescribeTunnelResult
  {
  public:
    DescribeTunnelResult();
    DescribeTunnelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeTunnelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The tunnel being described.</p>
     */
    inline const Tunnel& GetTunnel() const{ return m_tunnel; }

    /**
     * <p>The tunnel being described.</p>
     */
    inline void SetTunnel(const Tunnel& value) { m_tunnel = value; }

    /**
     * <p>The tunnel being described.</p>
     */
    inline void SetTunnel(Tunnel&& value) { m_tunnel = std::move(value); }

    /**
     * <p>The tunnel being described.</p>
     */
    inline DescribeTunnelResult& WithTunnel(const Tunnel& value) { SetTunnel(value); return *this;}

    /**
     * <p>The tunnel being described.</p>
     */
    inline DescribeTunnelResult& WithTunnel(Tunnel&& value) { SetTunnel(std::move(value)); return *this;}

  private:

    Tunnel m_tunnel;
  };

} // namespace Model
} // namespace IoTSecureTunneling
} // namespace Aws
