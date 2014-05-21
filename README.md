<h1><a name="bbqcoin-integrationstaging-tree" class="anchor" href="#bbqcoin-integrationstaging-tree"><span class="octicon octicon-link"></span></a>BBQCoin integration/staging tree</h1>

<p><a href="http://bbqcoinfoundation.org">http://bbqcoinfoundation.org</a></p>

<p>Copyright (c) 2009-2013 Bitcoin Developers
Copyright (c) 2011-2013 Litecoin Developers</p>
<h2>What is BBQCoin?</h2>
BBQCoin is a peer-to-peer Internet currency that enables instant payments to anyone in the world. It is based on the Bitcoin protocol but differs from Bitcoin in that it can be efficiently mined with consumer-grade hardware. BBQCoin provides faster transaction confirmations (2.5 minutes on average) and uses memory-hard, scrypt-based mining proof-of-work algorithm to target the regular computers and GPUs most people already have. The BBQCoin network is scheduled to produce 201.6 million currency units.
<ul>
<li>Each block generates 42 coins
<li>Difficulty adjustment 60 blocks
<li>Block generated every 1 minute
<li>Max coins to be created is 201.6 million
<li>Block reward halves every 24 million blocks or around every 45 years
<li>Uses the Scrypt hashing algorithm
<li>RPCPORT=19323
</li>
For more information, as well as an immediately useable, binary version of the BBQCoin client sofware, see http://bbqcoinfoundation.org/.
</li>
</ul>

<p>Sample bbqcoin.conf</p>
```
rpcuser=username
rpcpassword=password
rpcport=19332
server=1
gen=0
```

For more information, as well as an immediately useable, binary version of the Litecoin client sofware, see http://bbqcoinfoundation.org/.

<h2>
<a name="license" class="anchor" href="#license"><span class="octicon octicon-link"></span></a>License</h2>

<p>BBQCoin is released under the terms of the MIT license. See <code>COPYING</code> for more
information or see <a href="http://opensource.org/licenses/MIT">http://opensource.org/licenses/MIT</a>.</p>

<h2>
<a name="development-process" class="anchor" href="#development-process"><span class="octicon octicon-link"></span></a>Development process</h2>

<p>Developers work in their own trees, then submit pull requests when they think
their feature or bug fix is ready.</p>

<p>If it is a simple/trivial/non-controversial change, then one of the BBQCoin
development team members simply pulls it.</p>
