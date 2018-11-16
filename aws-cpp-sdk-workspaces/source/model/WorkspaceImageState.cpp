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

#include <aws/workspaces/model/WorkspaceImageState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WorkSpaces
  {
    namespace Model
    {
      namespace WorkspaceImageStateMapper
      {

        static const int AVAILABLE_HASH = HashingUtils::HashString("AVAILABLE");
        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int ERROR__HASH = HashingUtils::HashString("ERROR");


        WorkspaceImageState GetWorkspaceImageStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AVAILABLE_HASH)
          {
            return WorkspaceImageState::AVAILABLE;
          }
          else if (hashCode == PENDING_HASH)
          {
            return WorkspaceImageState::PENDING;
          }
          else if (hashCode == ERROR__HASH)
          {
            return WorkspaceImageState::ERROR_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WorkspaceImageState>(hashCode);
          }

          return WorkspaceImageState::NOT_SET;
        }

        Aws::String GetNameForWorkspaceImageState(WorkspaceImageState enumValue)
        {
          switch(enumValue)
          {
          case WorkspaceImageState::AVAILABLE:
            return "AVAILABLE";
          case WorkspaceImageState::PENDING:
            return "PENDING";
          case WorkspaceImageState::ERROR_:
            return "ERROR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace WorkspaceImageStateMapper
    } // namespace Model
  } // namespace WorkSpaces
} // namespace Aws
