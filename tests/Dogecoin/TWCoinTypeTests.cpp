// Copyright © 2017-2019 Trust Wallet.
//
// This file is part of Trust. The full Trust copyright notice, including
// terms governing use, modification, and redistribution, is contained in the
// file LICENSE at the root of the source code distribution tree.
//
// This is a GENERATED FILE, changes made here MAY BE LOST.
// Generated one-time (codegen/bin/cointests)
//

#include "../interface/TWTestUtilities.h"
#include <TrustWalletCore/TWCoinTypeConfiguration.h>
#include <gtest/gtest.h>


TEST(TWDogecoinCoinType, TWCoinType) {
    auto symbol = WRAPS(TWCoinTypeConfigurationGetSymbol(TWCoinTypeDogecoin));
    auto txId = TWStringCreateWithUTF8Bytes("123");
    auto txUrl = WRAPS(TWCoinTypeConfigurationGetTransactionURL(TWCoinTypeDogecoin, txId));
    auto id = WRAPS(TWCoinTypeConfigurationGetID(TWCoinTypeDogecoin));
    auto name = WRAPS(TWCoinTypeConfigurationGetName(TWCoinTypeDogecoin));

    ASSERT_EQ(TWCoinTypeConfigurationGetDecimals(TWCoinTypeDogecoin), 8);
    ASSERT_EQ(TWBlockchainBitcoin, TWCoinTypeBlockchain(TWCoinTypeDogecoin));
    ASSERT_EQ(0x16, TWCoinTypeP2shPrefix(TWCoinTypeDogecoin));
    ASSERT_EQ(0x0, TWCoinTypeStaticPrefix(TWCoinTypeDogecoin));
    assertStringsEqual(symbol, "DOGE");
    assertStringsEqual(txUrl, "https://blockchair.com/dogecoin/transaction/123");
    assertStringsEqual(id, "doge");
    assertStringsEqual(name, "Dogecoin");
}
