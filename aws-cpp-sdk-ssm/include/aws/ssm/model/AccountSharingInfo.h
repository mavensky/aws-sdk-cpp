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
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SSM
{
namespace Model
{

  /**
   * <p>Information includes the AWS account ID where the current document is shared
   * and the version shared with that account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/AccountSharingInfo">AWS
   * API Reference</a></p>
   */
  class AWS_SSM_API AccountSharingInfo
  {
  public:
    AccountSharingInfo();
    AccountSharingInfo(Aws::Utils::Json::JsonView jsonValue);
    AccountSharingInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The AWS account ID where the current document is shared.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The AWS account ID where the current document is shared.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The AWS account ID where the current document is shared.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The AWS account ID where the current document is shared.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The AWS account ID where the current document is shared.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The AWS account ID where the current document is shared.</p>
     */
    inline AccountSharingInfo& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The AWS account ID where the current document is shared.</p>
     */
    inline AccountSharingInfo& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The AWS account ID where the current document is shared.</p>
     */
    inline AccountSharingInfo& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The version of the current document shared with the account.</p>
     */
    inline const Aws::String& GetSharedDocumentVersion() const{ return m_sharedDocumentVersion; }

    /**
     * <p>The version of the current document shared with the account.</p>
     */
    inline bool SharedDocumentVersionHasBeenSet() const { return m_sharedDocumentVersionHasBeenSet; }

    /**
     * <p>The version of the current document shared with the account.</p>
     */
    inline void SetSharedDocumentVersion(const Aws::String& value) { m_sharedDocumentVersionHasBeenSet = true; m_sharedDocumentVersion = value; }

    /**
     * <p>The version of the current document shared with the account.</p>
     */
    inline void SetSharedDocumentVersion(Aws::String&& value) { m_sharedDocumentVersionHasBeenSet = true; m_sharedDocumentVersion = std::move(value); }

    /**
     * <p>The version of the current document shared with the account.</p>
     */
    inline void SetSharedDocumentVersion(const char* value) { m_sharedDocumentVersionHasBeenSet = true; m_sharedDocumentVersion.assign(value); }

    /**
     * <p>The version of the current document shared with the account.</p>
     */
    inline AccountSharingInfo& WithSharedDocumentVersion(const Aws::String& value) { SetSharedDocumentVersion(value); return *this;}

    /**
     * <p>The version of the current document shared with the account.</p>
     */
    inline AccountSharingInfo& WithSharedDocumentVersion(Aws::String&& value) { SetSharedDocumentVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the current document shared with the account.</p>
     */
    inline AccountSharingInfo& WithSharedDocumentVersion(const char* value) { SetSharedDocumentVersion(value); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet;

    Aws::String m_sharedDocumentVersion;
    bool m_sharedDocumentVersionHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
