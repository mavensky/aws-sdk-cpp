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
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/SESV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sesv2/model/SuppressionListReason.h>
#include <utility>

namespace Aws
{
namespace SESV2
{
namespace Model
{

  /**
   * <p>A request to suppress an email destination.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutSuppressedDestinationRequest">AWS
   * API Reference</a></p>
   */
  class AWS_SESV2_API PutSuppressedDestinationRequest : public SESV2Request
  {
  public:
    PutSuppressedDestinationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutSuppressedDestination"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>Email destination to be suppressed.</p>
     */
    inline const Aws::String& GetEmailAddress() const{ return m_emailAddress; }

    /**
     * <p>Email destination to be suppressed.</p>
     */
    inline bool EmailAddressHasBeenSet() const { return m_emailAddressHasBeenSet; }

    /**
     * <p>Email destination to be suppressed.</p>
     */
    inline void SetEmailAddress(const Aws::String& value) { m_emailAddressHasBeenSet = true; m_emailAddress = value; }

    /**
     * <p>Email destination to be suppressed.</p>
     */
    inline void SetEmailAddress(Aws::String&& value) { m_emailAddressHasBeenSet = true; m_emailAddress = std::move(value); }

    /**
     * <p>Email destination to be suppressed.</p>
     */
    inline void SetEmailAddress(const char* value) { m_emailAddressHasBeenSet = true; m_emailAddress.assign(value); }

    /**
     * <p>Email destination to be suppressed.</p>
     */
    inline PutSuppressedDestinationRequest& WithEmailAddress(const Aws::String& value) { SetEmailAddress(value); return *this;}

    /**
     * <p>Email destination to be suppressed.</p>
     */
    inline PutSuppressedDestinationRequest& WithEmailAddress(Aws::String&& value) { SetEmailAddress(std::move(value)); return *this;}

    /**
     * <p>Email destination to be suppressed.</p>
     */
    inline PutSuppressedDestinationRequest& WithEmailAddress(const char* value) { SetEmailAddress(value); return *this;}


    /**
     * <p>Reason for which the email destination is suppressed.</p>
     */
    inline const SuppressionListReason& GetReason() const{ return m_reason; }

    /**
     * <p>Reason for which the email destination is suppressed.</p>
     */
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }

    /**
     * <p>Reason for which the email destination is suppressed.</p>
     */
    inline void SetReason(const SuppressionListReason& value) { m_reasonHasBeenSet = true; m_reason = value; }

    /**
     * <p>Reason for which the email destination is suppressed.</p>
     */
    inline void SetReason(SuppressionListReason&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }

    /**
     * <p>Reason for which the email destination is suppressed.</p>
     */
    inline PutSuppressedDestinationRequest& WithReason(const SuppressionListReason& value) { SetReason(value); return *this;}

    /**
     * <p>Reason for which the email destination is suppressed.</p>
     */
    inline PutSuppressedDestinationRequest& WithReason(SuppressionListReason&& value) { SetReason(std::move(value)); return *this;}

  private:

    Aws::String m_emailAddress;
    bool m_emailAddressHasBeenSet;

    SuppressionListReason m_reason;
    bool m_reasonHasBeenSet;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
