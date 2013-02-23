// Copyright (c) 2009-2012 The Bitcoin developers
// Copyright (c) 2011-2012 BBQCoin Developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include <boost/assign/list_of.hpp> // for 'map_list_of()'
#include <boost/foreach.hpp>

#include "checkpoints.h"

#include "main.h"
#include "uint256.h"

namespace Checkpoints
{
    typedef std::map<int, uint256> MapCheckpoints;

    //
    // What makes a good checkpoint block?
    // + Is surrounded by blocks with reasonable timestamps
    //   (no blocks before with a timestamp after, none after with
    //    timestamp before)
    // + Contains no strange transactions
    //
    static MapCheckpoints mapCheckpoints =
        boost::assign::map_list_of
        (     1, uint256("0x65a7f2baaefd3e45d6f355fee028d0e1012b9639bfaf21d8db4ee81a86df41aa"))
        (     8, uint256("0x8614eae7441737fa1c862713ecce5a7251136931887d6767f02ca439961a9b5a"))
        (    32, uint256("0x19ed170b3ecbb228ee085869ed8afdaf1ade6e57045b03d9e0a05c8c7e3b5f75"))
        (   674, uint256("0xd70cd046b76ab8bd9af9953fa56d852f6a671a1f009322c63b096071723ec8d4"))
        ( 86425, uint256("0x00000b64041067a9cc8ad4b84e6a638ced0513319724bae7ceacbaf97380b4ae"))
       ( 283242, uint256("0x00000407002aa58f18c60c6fed312e96ed4a4f7851312815d37797537fcb1221"))
        ;
/*
    static MapCheckpoints mapCheckpointsTestnet =
        boost::assign::map_list_of
        ( 546, uint256("000000002a936ca763904c3c35fce2f3556c559c0214345d31b1bcebf76acb70"))
        ;
*/
    bool CheckBlock(int nHeight, const uint256& hash)
    {
        if (fTestNet) return true; // Testnet has no checkpoints

        MapCheckpoints::const_iterator i = mapCheckpoints.find(nHeight);
        if (i == mapCheckpoints.end()) return true;
        return hash == i->second;
    }

    int GetTotalBlocksEstimate()
    {
        if (fTestNet) return 0;

        return mapCheckpoints.rbegin()->first;
    }

    CBlockIndex* GetLastCheckpoint(const std::map<uint256, CBlockIndex*>& mapBlockIndex)
    {
        if (fTestNet) return NULL;

        BOOST_REVERSE_FOREACH(const MapCheckpoints::value_type& i, mapCheckpoints)
        {
            const uint256& hash = i.second;
            std::map<uint256, CBlockIndex*>::const_iterator t = mapBlockIndex.find(hash);
            if (t != mapBlockIndex.end())
                return t->second;
        }
        return NULL;
    }
}
