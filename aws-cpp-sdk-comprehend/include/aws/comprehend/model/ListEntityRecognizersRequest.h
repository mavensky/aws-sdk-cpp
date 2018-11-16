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
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/comprehend/ComprehendRequest.h>
#include <aws/comprehend/model/EntityRecognizerFilter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Comprehend
{
namespace Model
{

  /**
   */
  class AWS_COMPREHEND_API ListEntityRecognizersRequest : public ComprehendRequest
  {
  public:
    ListEntityRecognizersRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListEntityRecognizers"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Filters the list of entities returned. You can filter on <code>Status</code>,
     * <code>SubmitTimeBefore</code>, or <code>SubmitTimeAfter</code>. You can only set
     * one filter at a time.</p>
     */
    inline const EntityRecognizerFilter& GetFilter() const{ return m_filter; }

    /**
     * <p>Filters the list of entities returned. You can filter on <code>Status</code>,
     * <code>SubmitTimeBefore</code>, or <code>SubmitTimeAfter</code>. You can only set
     * one filter at a time.</p>
     */
    inline void SetFilter(const EntityRecognizerFilter& value) { m_filterHasBeenSet = true; m_filter = value; }

    /**
     * <p>Filters the list of entities returned. You can filter on <code>Status</code>,
     * <code>SubmitTimeBefore</code>, or <code>SubmitTimeAfter</code>. You can only set
     * one filter at a time.</p>
     */
    inline void SetFilter(EntityRecognizerFilter&& value) { m_filterHasBeenSet = true; m_filter = std::move(value); }

    /**
     * <p>Filters the list of entities returned. You can filter on <code>Status</code>,
     * <code>SubmitTimeBefore</code>, or <code>SubmitTimeAfter</code>. You can only set
     * one filter at a time.</p>
     */
    inline ListEntityRecognizersRequest& WithFilter(const EntityRecognizerFilter& value) { SetFilter(value); return *this;}

    /**
     * <p>Filters the list of entities returned. You can filter on <code>Status</code>,
     * <code>SubmitTimeBefore</code>, or <code>SubmitTimeAfter</code>. You can only set
     * one filter at a time.</p>
     */
    inline ListEntityRecognizersRequest& WithFilter(EntityRecognizerFilter&& value) { SetFilter(std::move(value)); return *this;}


    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline ListEntityRecognizersRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline ListEntityRecognizersRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline ListEntityRecognizersRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p> The maximum number of results to return on each page. The default is
     * 100.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p> The maximum number of results to return on each page. The default is
     * 100.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p> The maximum number of results to return on each page. The default is
     * 100.</p>
     */
    inline ListEntityRecognizersRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    EntityRecognizerFilter m_filter;
    bool m_filterHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
