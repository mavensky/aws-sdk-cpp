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
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/kms/KMSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Array.h>
#include <aws/kms/model/MessageType.h>
#include <aws/kms/model/SigningAlgorithmSpec.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace KMS
{
namespace Model
{

  /**
   */
  class AWS_KMS_API VerifyRequest : public KMSRequest
  {
  public:
    VerifyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "Verify"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Identifies the asymmetric CMK that will be used to verify the signature. This
     * must be the same CMK that was used to generate the signature. If you specify a
     * different CMK, the value of the <code>SignatureValid</code> field in the
     * response will be <code>False</code>.</p> <p>To specify a CMK, use its key ID,
     * Amazon Resource Name (ARN), alias name, or alias ARN. When using an alias name,
     * prefix it with <code>"alias/"</code>. To specify a CMK in a different AWS
     * account, you must use the key ARN or alias ARN.</p> <p>For example:</p> <ul>
     * <li> <p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li>
     * <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> <li> <p>Alias name: <code>alias/ExampleAlias</code> </p> </li> <li>
     * <p>Alias ARN: <code>arn:aws:kms:us-east-2:111122223333:alias/ExampleAlias</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a CMK, use <a>ListKeys</a>
     * or <a>DescribeKey</a>. To get the alias name and alias ARN, use
     * <a>ListAliases</a>.</p>
     */
    inline const Aws::String& GetKeyId() const{ return m_keyId; }

    /**
     * <p>Identifies the asymmetric CMK that will be used to verify the signature. This
     * must be the same CMK that was used to generate the signature. If you specify a
     * different CMK, the value of the <code>SignatureValid</code> field in the
     * response will be <code>False</code>.</p> <p>To specify a CMK, use its key ID,
     * Amazon Resource Name (ARN), alias name, or alias ARN. When using an alias name,
     * prefix it with <code>"alias/"</code>. To specify a CMK in a different AWS
     * account, you must use the key ARN or alias ARN.</p> <p>For example:</p> <ul>
     * <li> <p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li>
     * <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> <li> <p>Alias name: <code>alias/ExampleAlias</code> </p> </li> <li>
     * <p>Alias ARN: <code>arn:aws:kms:us-east-2:111122223333:alias/ExampleAlias</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a CMK, use <a>ListKeys</a>
     * or <a>DescribeKey</a>. To get the alias name and alias ARN, use
     * <a>ListAliases</a>.</p>
     */
    inline bool KeyIdHasBeenSet() const { return m_keyIdHasBeenSet; }

    /**
     * <p>Identifies the asymmetric CMK that will be used to verify the signature. This
     * must be the same CMK that was used to generate the signature. If you specify a
     * different CMK, the value of the <code>SignatureValid</code> field in the
     * response will be <code>False</code>.</p> <p>To specify a CMK, use its key ID,
     * Amazon Resource Name (ARN), alias name, or alias ARN. When using an alias name,
     * prefix it with <code>"alias/"</code>. To specify a CMK in a different AWS
     * account, you must use the key ARN or alias ARN.</p> <p>For example:</p> <ul>
     * <li> <p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li>
     * <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> <li> <p>Alias name: <code>alias/ExampleAlias</code> </p> </li> <li>
     * <p>Alias ARN: <code>arn:aws:kms:us-east-2:111122223333:alias/ExampleAlias</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a CMK, use <a>ListKeys</a>
     * or <a>DescribeKey</a>. To get the alias name and alias ARN, use
     * <a>ListAliases</a>.</p>
     */
    inline void SetKeyId(const Aws::String& value) { m_keyIdHasBeenSet = true; m_keyId = value; }

    /**
     * <p>Identifies the asymmetric CMK that will be used to verify the signature. This
     * must be the same CMK that was used to generate the signature. If you specify a
     * different CMK, the value of the <code>SignatureValid</code> field in the
     * response will be <code>False</code>.</p> <p>To specify a CMK, use its key ID,
     * Amazon Resource Name (ARN), alias name, or alias ARN. When using an alias name,
     * prefix it with <code>"alias/"</code>. To specify a CMK in a different AWS
     * account, you must use the key ARN or alias ARN.</p> <p>For example:</p> <ul>
     * <li> <p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li>
     * <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> <li> <p>Alias name: <code>alias/ExampleAlias</code> </p> </li> <li>
     * <p>Alias ARN: <code>arn:aws:kms:us-east-2:111122223333:alias/ExampleAlias</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a CMK, use <a>ListKeys</a>
     * or <a>DescribeKey</a>. To get the alias name and alias ARN, use
     * <a>ListAliases</a>.</p>
     */
    inline void SetKeyId(Aws::String&& value) { m_keyIdHasBeenSet = true; m_keyId = std::move(value); }

    /**
     * <p>Identifies the asymmetric CMK that will be used to verify the signature. This
     * must be the same CMK that was used to generate the signature. If you specify a
     * different CMK, the value of the <code>SignatureValid</code> field in the
     * response will be <code>False</code>.</p> <p>To specify a CMK, use its key ID,
     * Amazon Resource Name (ARN), alias name, or alias ARN. When using an alias name,
     * prefix it with <code>"alias/"</code>. To specify a CMK in a different AWS
     * account, you must use the key ARN or alias ARN.</p> <p>For example:</p> <ul>
     * <li> <p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li>
     * <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> <li> <p>Alias name: <code>alias/ExampleAlias</code> </p> </li> <li>
     * <p>Alias ARN: <code>arn:aws:kms:us-east-2:111122223333:alias/ExampleAlias</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a CMK, use <a>ListKeys</a>
     * or <a>DescribeKey</a>. To get the alias name and alias ARN, use
     * <a>ListAliases</a>.</p>
     */
    inline void SetKeyId(const char* value) { m_keyIdHasBeenSet = true; m_keyId.assign(value); }

    /**
     * <p>Identifies the asymmetric CMK that will be used to verify the signature. This
     * must be the same CMK that was used to generate the signature. If you specify a
     * different CMK, the value of the <code>SignatureValid</code> field in the
     * response will be <code>False</code>.</p> <p>To specify a CMK, use its key ID,
     * Amazon Resource Name (ARN), alias name, or alias ARN. When using an alias name,
     * prefix it with <code>"alias/"</code>. To specify a CMK in a different AWS
     * account, you must use the key ARN or alias ARN.</p> <p>For example:</p> <ul>
     * <li> <p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li>
     * <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> <li> <p>Alias name: <code>alias/ExampleAlias</code> </p> </li> <li>
     * <p>Alias ARN: <code>arn:aws:kms:us-east-2:111122223333:alias/ExampleAlias</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a CMK, use <a>ListKeys</a>
     * or <a>DescribeKey</a>. To get the alias name and alias ARN, use
     * <a>ListAliases</a>.</p>
     */
    inline VerifyRequest& WithKeyId(const Aws::String& value) { SetKeyId(value); return *this;}

    /**
     * <p>Identifies the asymmetric CMK that will be used to verify the signature. This
     * must be the same CMK that was used to generate the signature. If you specify a
     * different CMK, the value of the <code>SignatureValid</code> field in the
     * response will be <code>False</code>.</p> <p>To specify a CMK, use its key ID,
     * Amazon Resource Name (ARN), alias name, or alias ARN. When using an alias name,
     * prefix it with <code>"alias/"</code>. To specify a CMK in a different AWS
     * account, you must use the key ARN or alias ARN.</p> <p>For example:</p> <ul>
     * <li> <p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li>
     * <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> <li> <p>Alias name: <code>alias/ExampleAlias</code> </p> </li> <li>
     * <p>Alias ARN: <code>arn:aws:kms:us-east-2:111122223333:alias/ExampleAlias</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a CMK, use <a>ListKeys</a>
     * or <a>DescribeKey</a>. To get the alias name and alias ARN, use
     * <a>ListAliases</a>.</p>
     */
    inline VerifyRequest& WithKeyId(Aws::String&& value) { SetKeyId(std::move(value)); return *this;}

    /**
     * <p>Identifies the asymmetric CMK that will be used to verify the signature. This
     * must be the same CMK that was used to generate the signature. If you specify a
     * different CMK, the value of the <code>SignatureValid</code> field in the
     * response will be <code>False</code>.</p> <p>To specify a CMK, use its key ID,
     * Amazon Resource Name (ARN), alias name, or alias ARN. When using an alias name,
     * prefix it with <code>"alias/"</code>. To specify a CMK in a different AWS
     * account, you must use the key ARN or alias ARN.</p> <p>For example:</p> <ul>
     * <li> <p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li>
     * <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> <li> <p>Alias name: <code>alias/ExampleAlias</code> </p> </li> <li>
     * <p>Alias ARN: <code>arn:aws:kms:us-east-2:111122223333:alias/ExampleAlias</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a CMK, use <a>ListKeys</a>
     * or <a>DescribeKey</a>. To get the alias name and alias ARN, use
     * <a>ListAliases</a>.</p>
     */
    inline VerifyRequest& WithKeyId(const char* value) { SetKeyId(value); return *this;}


    /**
     * <p>Specifies the message that was signed, or a hash digest of that message.
     * Messages can be 0-4096 bytes. To verify a larger message, provide a hash digest
     * of the message.</p> <p>If the digest of the message specified here is different
     * from the message digest that was signed, the <code>SignatureValid</code> value
     * in the response will be <code>False</code>.</p>
     */
    inline const Aws::Utils::CryptoBuffer& GetMessage() const{ return m_message; }

    /**
     * <p>Specifies the message that was signed, or a hash digest of that message.
     * Messages can be 0-4096 bytes. To verify a larger message, provide a hash digest
     * of the message.</p> <p>If the digest of the message specified here is different
     * from the message digest that was signed, the <code>SignatureValid</code> value
     * in the response will be <code>False</code>.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>Specifies the message that was signed, or a hash digest of that message.
     * Messages can be 0-4096 bytes. To verify a larger message, provide a hash digest
     * of the message.</p> <p>If the digest of the message specified here is different
     * from the message digest that was signed, the <code>SignatureValid</code> value
     * in the response will be <code>False</code>.</p>
     */
    inline void SetMessage(const Aws::Utils::CryptoBuffer& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>Specifies the message that was signed, or a hash digest of that message.
     * Messages can be 0-4096 bytes. To verify a larger message, provide a hash digest
     * of the message.</p> <p>If the digest of the message specified here is different
     * from the message digest that was signed, the <code>SignatureValid</code> value
     * in the response will be <code>False</code>.</p>
     */
    inline void SetMessage(Aws::Utils::CryptoBuffer&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>Specifies the message that was signed, or a hash digest of that message.
     * Messages can be 0-4096 bytes. To verify a larger message, provide a hash digest
     * of the message.</p> <p>If the digest of the message specified here is different
     * from the message digest that was signed, the <code>SignatureValid</code> value
     * in the response will be <code>False</code>.</p>
     */
    inline VerifyRequest& WithMessage(const Aws::Utils::CryptoBuffer& value) { SetMessage(value); return *this;}

    /**
     * <p>Specifies the message that was signed, or a hash digest of that message.
     * Messages can be 0-4096 bytes. To verify a larger message, provide a hash digest
     * of the message.</p> <p>If the digest of the message specified here is different
     * from the message digest that was signed, the <code>SignatureValid</code> value
     * in the response will be <code>False</code>.</p>
     */
    inline VerifyRequest& WithMessage(Aws::Utils::CryptoBuffer&& value) { SetMessage(std::move(value)); return *this;}


    /**
     * <p>Tells AWS KMS whether the value of the <code>Message</code> parameter is a
     * message or message digest. To indicate a message, enter <code>RAW</code>. To
     * indicate a message digest, enter <code>DIGEST</code>.</p>
     */
    inline const MessageType& GetMessageType() const{ return m_messageType; }

    /**
     * <p>Tells AWS KMS whether the value of the <code>Message</code> parameter is a
     * message or message digest. To indicate a message, enter <code>RAW</code>. To
     * indicate a message digest, enter <code>DIGEST</code>.</p>
     */
    inline bool MessageTypeHasBeenSet() const { return m_messageTypeHasBeenSet; }

    /**
     * <p>Tells AWS KMS whether the value of the <code>Message</code> parameter is a
     * message or message digest. To indicate a message, enter <code>RAW</code>. To
     * indicate a message digest, enter <code>DIGEST</code>.</p>
     */
    inline void SetMessageType(const MessageType& value) { m_messageTypeHasBeenSet = true; m_messageType = value; }

    /**
     * <p>Tells AWS KMS whether the value of the <code>Message</code> parameter is a
     * message or message digest. To indicate a message, enter <code>RAW</code>. To
     * indicate a message digest, enter <code>DIGEST</code>.</p>
     */
    inline void SetMessageType(MessageType&& value) { m_messageTypeHasBeenSet = true; m_messageType = std::move(value); }

    /**
     * <p>Tells AWS KMS whether the value of the <code>Message</code> parameter is a
     * message or message digest. To indicate a message, enter <code>RAW</code>. To
     * indicate a message digest, enter <code>DIGEST</code>.</p>
     */
    inline VerifyRequest& WithMessageType(const MessageType& value) { SetMessageType(value); return *this;}

    /**
     * <p>Tells AWS KMS whether the value of the <code>Message</code> parameter is a
     * message or message digest. To indicate a message, enter <code>RAW</code>. To
     * indicate a message digest, enter <code>DIGEST</code>.</p>
     */
    inline VerifyRequest& WithMessageType(MessageType&& value) { SetMessageType(std::move(value)); return *this;}


    /**
     * <p>The signature that the <code>Sign</code> operation generated.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetSignature() const{ return m_signature; }

    /**
     * <p>The signature that the <code>Sign</code> operation generated.</p>
     */
    inline bool SignatureHasBeenSet() const { return m_signatureHasBeenSet; }

    /**
     * <p>The signature that the <code>Sign</code> operation generated.</p>
     */
    inline void SetSignature(const Aws::Utils::ByteBuffer& value) { m_signatureHasBeenSet = true; m_signature = value; }

    /**
     * <p>The signature that the <code>Sign</code> operation generated.</p>
     */
    inline void SetSignature(Aws::Utils::ByteBuffer&& value) { m_signatureHasBeenSet = true; m_signature = std::move(value); }

    /**
     * <p>The signature that the <code>Sign</code> operation generated.</p>
     */
    inline VerifyRequest& WithSignature(const Aws::Utils::ByteBuffer& value) { SetSignature(value); return *this;}

    /**
     * <p>The signature that the <code>Sign</code> operation generated.</p>
     */
    inline VerifyRequest& WithSignature(Aws::Utils::ByteBuffer&& value) { SetSignature(std::move(value)); return *this;}


    /**
     * <p>The signing algorithm that was used to sign the message. If you submit a
     * different algorithm, the value of the <code>SignatureValid</code> field in the
     * response will be <code>False</code>.</p>
     */
    inline const SigningAlgorithmSpec& GetSigningAlgorithm() const{ return m_signingAlgorithm; }

    /**
     * <p>The signing algorithm that was used to sign the message. If you submit a
     * different algorithm, the value of the <code>SignatureValid</code> field in the
     * response will be <code>False</code>.</p>
     */
    inline bool SigningAlgorithmHasBeenSet() const { return m_signingAlgorithmHasBeenSet; }

    /**
     * <p>The signing algorithm that was used to sign the message. If you submit a
     * different algorithm, the value of the <code>SignatureValid</code> field in the
     * response will be <code>False</code>.</p>
     */
    inline void SetSigningAlgorithm(const SigningAlgorithmSpec& value) { m_signingAlgorithmHasBeenSet = true; m_signingAlgorithm = value; }

    /**
     * <p>The signing algorithm that was used to sign the message. If you submit a
     * different algorithm, the value of the <code>SignatureValid</code> field in the
     * response will be <code>False</code>.</p>
     */
    inline void SetSigningAlgorithm(SigningAlgorithmSpec&& value) { m_signingAlgorithmHasBeenSet = true; m_signingAlgorithm = std::move(value); }

    /**
     * <p>The signing algorithm that was used to sign the message. If you submit a
     * different algorithm, the value of the <code>SignatureValid</code> field in the
     * response will be <code>False</code>.</p>
     */
    inline VerifyRequest& WithSigningAlgorithm(const SigningAlgorithmSpec& value) { SetSigningAlgorithm(value); return *this;}

    /**
     * <p>The signing algorithm that was used to sign the message. If you submit a
     * different algorithm, the value of the <code>SignatureValid</code> field in the
     * response will be <code>False</code>.</p>
     */
    inline VerifyRequest& WithSigningAlgorithm(SigningAlgorithmSpec&& value) { SetSigningAlgorithm(std::move(value)); return *this;}


    /**
     * <p>A list of grant tokens.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#grant_token">Grant
     * Tokens</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGrantTokens() const{ return m_grantTokens; }

    /**
     * <p>A list of grant tokens.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#grant_token">Grant
     * Tokens</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline bool GrantTokensHasBeenSet() const { return m_grantTokensHasBeenSet; }

    /**
     * <p>A list of grant tokens.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#grant_token">Grant
     * Tokens</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline void SetGrantTokens(const Aws::Vector<Aws::String>& value) { m_grantTokensHasBeenSet = true; m_grantTokens = value; }

    /**
     * <p>A list of grant tokens.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#grant_token">Grant
     * Tokens</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline void SetGrantTokens(Aws::Vector<Aws::String>&& value) { m_grantTokensHasBeenSet = true; m_grantTokens = std::move(value); }

    /**
     * <p>A list of grant tokens.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#grant_token">Grant
     * Tokens</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline VerifyRequest& WithGrantTokens(const Aws::Vector<Aws::String>& value) { SetGrantTokens(value); return *this;}

    /**
     * <p>A list of grant tokens.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#grant_token">Grant
     * Tokens</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline VerifyRequest& WithGrantTokens(Aws::Vector<Aws::String>&& value) { SetGrantTokens(std::move(value)); return *this;}

    /**
     * <p>A list of grant tokens.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#grant_token">Grant
     * Tokens</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline VerifyRequest& AddGrantTokens(const Aws::String& value) { m_grantTokensHasBeenSet = true; m_grantTokens.push_back(value); return *this; }

    /**
     * <p>A list of grant tokens.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#grant_token">Grant
     * Tokens</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline VerifyRequest& AddGrantTokens(Aws::String&& value) { m_grantTokensHasBeenSet = true; m_grantTokens.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of grant tokens.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#grant_token">Grant
     * Tokens</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     */
    inline VerifyRequest& AddGrantTokens(const char* value) { m_grantTokensHasBeenSet = true; m_grantTokens.push_back(value); return *this; }

  private:

    Aws::String m_keyId;
    bool m_keyIdHasBeenSet;

    Aws::Utils::CryptoBuffer m_message;
    bool m_messageHasBeenSet;

    MessageType m_messageType;
    bool m_messageTypeHasBeenSet;

    Aws::Utils::ByteBuffer m_signature;
    bool m_signatureHasBeenSet;

    SigningAlgorithmSpec m_signingAlgorithm;
    bool m_signingAlgorithmHasBeenSet;

    Aws::Vector<Aws::String> m_grantTokens;
    bool m_grantTokensHasBeenSet;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
