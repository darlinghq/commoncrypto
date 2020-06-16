{
.sm  =  "e2dc07e14253b5f56e078d9921d08fe25848b8b41f945f2b73ad6c3c4d9ce21b6432ec65fbbe895c7780d11a555e38f6e7fc4a0f07c0d57625576a47a5121e184aef0f52e9a8e2f38442cb98fea035c66a4c5fde9ee376d395b18a025e84ff8a14ed2340fbf38e615b1a50415d8fdd63498858c322a04937f46b5b3a30332d675a6a04d02cbab115ffb94172bb629cd809f0d3b3dd2edf8261c63968b42fbd9f5f3881d9bcfd4873d5dd42e6bf4afddbf76cb11f66592b5cd548740f7d5dde48c57a83037c4adaef54bfb83234978c48fd5bb8a21520b00db751913ed8160a6132c00f502a290728d44c43daa181054e41423ee508495a5bdbb3e85f518aad45cbb30769c7a189ac2f60a06b6be4ec14be7512828134d8657b359218e1c3e89eb7dc9e6d3aa8d556717e06824461a18070cbfe454cc06f83cfdff1412a18c1c5",
.se  =  "010001",
.sp1  = "fae7bd42f70a7439884ab450b84e94f8c76990eab24b53b9807e5a53779a9c02b4ac5c97b467779de13c80034920db510b433bceabc8dfb189628d5d0310494e62541d1ab3aefbcce88622af1d1a649226af6096fc44480e208534e3b2d7fbcd863e4bdb1aa919fb5993fd67a6d3482311e8bfa20aa9163268824184b8c00db04d57397d24f1de528a74556774f6f7be0d3de37b3922dcfd6d5ad18da3fe5c41",
.sp2 = "e7774be37dda30af8c38ddb04457297667af63db7ff17cf67572bd77682ce3c12dabebe90c13a6be3bfe1eadc11038b83cf03987a6f0bef143270db3a61388710d3d12252d69f296097723fa3f9eba25196d116519019883ff9a77aea6e985e162cd4ebefde14e87286c59d66d086703a5f3d76fa245d9b42269b9d4cb9ebc9e6f1c7c266d0ef4d7ed09a3c402b7d279834fc3dd90da63c1b1776d11d34dd485",
},

{
.sm  =  "ac49cdef10fe6f5b094a01612078002907d5e99269a5b920ef8890128907e5fc2cd589d564bd1f8c94a91290c311eeedb9e2ef9b2f1cb5bc8365f93b0052fabb1ec65ef0dbc0286b4cefdcee881e3ebb009a28102b30d63dd0c7f871db4b073f388820e76a20a2d0e55d7dc654d45707ec91900ac7668e146ae49d4786f46592f76ec727829cfe77cea9884ee4199ff22cfe6cad0f92e82ded8c372632b5d0db8e8856cdb4cbe77a5dc8c8cbd395abae25c2b1e8635950b3449509729c1155c75d5425e653872e31f697a447e271b5ff86efada48651dfb18dd32ca0959cf7250066f4f2ef6d201f378023feb501b5c366ea0ebccc95b27cc95734b61cb53af7e8a325fc93cba701fe1ef5caf83fb83097a355162cf3b00a3f13c0fb4716986c3ea002e63e2699308475bab68ac72c54a41e6522c6160892024eb7a91541e9bc549b28b665d37bc6b4570e93ba87710a65655e180fe2517a7bef32538e695332bfcd4fd00eea95a8cd5268cf08129617d64a6c7bba50dcbb2fbdda5143efd2effef93bcdbe617cdca658d9e48d0301f86ad6ab89fc0c86e18d5701b96f419b041f7e26e95e145ac8daf90b1c9daa86581824e56f2fbf589bd8a3844d34705463b27774801b338c83566b0f3205161cd1582a6ee34ac6d89eb46c419753a19e2b4b74cbabae425c4aa849f981704235a484891fbf49dcf86188e7f1548c837597",
.se  = "010001",
.sp1  = "d2603b41e3a9cffa1f909ec920bb04e8b082a3735ee559ff8cb547b6f31de242f4b58d3b06cb2a856b1a6b839604ea4ff8bad2752a80d313e1cc557452d5a35d0c6257601ffffceefb6d242c788ef3fada8995d10731ce6057f70d0270b4d8e701505ca191acb0d2783d00e66ccaf04115bf0d407524a1829a349999a14887f1c933876ed28d203681a128cc2eb3e317b3aac1a9976c42dbcf655b0d0f461c33415a7048d29b955aca5a746c78e22887167e0b75efa5cfc3c944a57da4337682996d1d35609674add22dcdea769136bf5885a685e91dec473fb6ceb87802e6993e03ba6095ad91ab53e57c0f0cb91660d8066bf10575a12b406df53e877e73f5",
.sp2  = "d1a700f2e8a3217ead777f87dd6a7a872c96b5db646e258d7651fba79d326785eb23c1553f05a4ae06fc7ea2a50af3ddd1136ebb8d5eff8423704d75733bf91c28b55243dc66b75e125f5acbe1437d0ddba988494cbceb0b6683b0708f72c5e728b65295ba33d8197af420493bcaa61673841a3eb1cfafb62806becdeb55c56ba4717439e97341d21ac1e9944134e23f7d3204926b7def11b317573f616979141632807574ab54ad13c98a273ae72b655f74e263919f2eec456d69b3020adeec68044572fb3f538f1c5688c4986f93b16fd989946581cdf4a742aae36f8f9574c9b728dc1a4bea29f9b099a69248e61614319c0a8734a72cf1df6f90fb7657db",
},
// The following test vector is from rdar://problem/34916499 after m,e,p and q were decoded from base64url encoding. It tests q > p, but where length(p)==length(q)
{
     .sm = "CD89FEAC3A71EA223B032946A0D561E56B5D960C9035AEB7248BF9EB60745E1DD87B98A9DCC5BF7A13DE10E2244C515F8A04CD736B2D0AB4C754D4468299F2D1B46C6094FAC3FF0F073782C08278C4CCBD2B3CBC4866F20BC41F2F49E8A5426E25C214E44B93C98E175FDA7D336141AAD8E6A652868FA5EC3FCD49AE9565D5937908D156D669A91088DD73B7A0CE51F409A246BA6F8EA6BF2B4B0FFE49040D1035AC7ED00FC1992DAC9964FE62F4EBCA3AC2E3EE4A0AF38617AC6F1042E77D92B16B5590881B272F9495CB1323A2824B1647422009D2ADFB6DFD79DF9205F2892B55DEA226A5236765E5B5B669C43900B684CA044A47DED06231486253390E4D",
     .se  = "010001",
     .sp1 = "D5B95164CE5A5CFEC291D3935A275C9E465088193C467A65D76A7602C0E00AA05678BB463A88BC96EC79CCFC0AD3B701E4C71FD2BEFFB8B1D0B74B4F1DFB8328C69C92D2D4B280AC5436E790E3C92FD68AD2758B08CCF2F6C82666AE0B30E0A1351CCF9107A0ABEBC9C5738DFCE97FDCED981A578F9E92084FBF55FC2CC36EE5",
     .sp2 = "F6323504E809368E8FDD4DB576011888C8C9845DFC9F5C62CB146397F769E68B733789A4A60DF6B060190213B5ADD8DCF59CF63A5BEE33279FE9842BB5C0EE55C9BC4AAD98C98C21A81E9D94DE9D2ACC2BF601B2044A9F714B4AA06466EEE340D7FCFF37CDE7F61D638B4EBDE7CBAADD2DD0BD24B8FC594D96F40CB2838EC349",
},
// The following test vector ensures that we handle the case where p > q and length (p) = length(q)+1
{
    .sm = "fe5473e3f61e0233ffa9f97edd1728261a24b3353c6d307326637f2331a83905c919d1b0b14bbaf96b621fac12e544b0fb32577aa73e6d672a33401b70b195c09503204d3cc2232cb25493e5ba4656b8ab47922e39c82f87292ff53746bc5a5f0f578636ef0564fc2ed426a167d66d4663385a2ba7838c5e34f996a57afbf6de036a711efbb8efd059e305ef6aaba44b7c64c0d2aee737eeb073bdee90012429f6ae7aa3ce7d48e0093726e05c6a57178a7d8b46f5edd073b4bd197ec51871b0753f4411217a78eb909e6da0b2076263107cd03700e9fcf763d845910238f94f26e844e735c626d9ad70a0488c46dfd738b52aa2826a2c69e0ea787b67a9fd35",
    .se  = "010001",
    .sp1 = "177420c7ce2032ce7542aa987df763516b59efc62769a61193a95bba93c7a96749c051d960b42cefbf8177ead0193620aa001e542f8a09cda8925cc8c9a80e6bb29c8e576219a8b6476215ad452f7d28cfd11169b6b79f14320fd336f5a106fe499a91c97cadeb222d698b8cf423103d50d12ad5b437ab9567d2f92cf3f51f34d",
    .sp2 = "ad80cfade768443c736c9d556f155afa41a8fb72c4c203d5b7bf0d68c712a5393a5a0af69822dad8f8b8bd683ccd0b2f053c84c7100f5c5d982591fc1421817414d9812f2b646ff8c9b71ec19781ed319483c5e05fb1f72ad548426990bef632e47f252a778ba2ab25f9016e9f427c91446d0ca5512f26a66883f67a17936d89",
},

// The following test vector ensures that we handle the case where q > p and length (q) = length(p)+1
{
    .sm = "fe5473e3f61e0233ffa9f97edd1728261a24b3353c6d307326637f2331a83905c919d1b0b14bbaf96b621fac12e544b0fb32577aa73e6d672a33401b70b195c09503204d3cc2232cb25493e5ba4656b8ab47922e39c82f87292ff53746bc5a5f0f578636ef0564fc2ed426a167d66d4663385a2ba7838c5e34f996a57afbf6de036a711efbb8efd059e305ef6aaba44b7c64c0d2aee737eeb073bdee90012429f6ae7aa3ce7d48e0093726e05c6a57178a7d8b46f5edd073b4bd197ec51871b0753f4411217a78eb909e6da0b2076263107cd03700e9fcf763d845910238f94f26e844e735c626d9ad70a0488c46dfd738b52aa2826a2c69e0ea787b67a9fd35",
    .se  = "010001",
    .sp1 = "ad80cfade768443c736c9d556f155afa41a8fb72c4c203d5b7bf0d68c712a5393a5a0af69822dad8f8b8bd683ccd0b2f053c84c7100f5c5d982591fc1421817414d9812f2b646ff8c9b71ec19781ed319483c5e05fb1f72ad548426990bef632e47f252a778ba2ab25f9016e9f427c91446d0ca5512f26a66883f67a17936d89",
    .sp2 = "177420c7ce2032ce7542aa987df763516b59efc62769a61193a95bba93c7a96749c051d960b42cefbf8177ead0193620aa001e542f8a09cda8925cc8c9a80e6bb29c8e576219a8b6476215ad452f7d28cfd11169b6b79f14320fd336f5a106fe499a91c97cadeb222d698b8cf423103d50d12ad5b437ab9567d2f92cf3f51f34d",
},


{.sm=NULL}