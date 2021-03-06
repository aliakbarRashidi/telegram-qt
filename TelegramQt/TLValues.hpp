/*
   Copyright (C) 2014-2017 Alexandr Akulich <akulichalexander@gmail.com>

   This file is a part of TelegramQt library.

   This library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   This library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

 */

#ifndef TLVALUE_HPP
#define TLVALUE_HPP

#include "telegramqt_global.h"

#include <QObject>

// TODO: Namespace?

#ifndef TELEGRAMQT_LAYER
#define TELEGRAMQT_LAYER 72
#endif

struct TELEGRAMQT_INTERNAL_EXPORT TLValue {
    Q_GADGET
    Q_ENUMS(Value)
public:
    static constexpr quint32 CurrentLayer = TELEGRAMQT_LAYER;
    enum Value : quint32 {
        // Generated TLValues
        // Types
        ResPQ = 0x05162463,
        PQInnerData = 0x83c95aec,
        ServerDHParamsFail = 0x79cb045d,
        ServerDHParamsOk = 0xd0e8075c,
        ServerDHInnerData = 0xb5890dba,
        ClientDHInnerData = 0x6643b654,
        DhGenOk = 0x3bcbf734,
        DhGenRetry = 0x46dc1fb9,
        DhGenFail = 0xa69dae02,
        DestroyAuthKeyOk = 0xf660e1d4,
        DestroyAuthKeyNone = 0x0a9f2259,
        DestroyAuthKeyFail = 0xea109b13,
        // Types
        MsgsAck = 0x62d6b459,
        BadMsgNotification = 0xa7eff811,
        BadServerSalt = 0xedab447b,
        MsgsStateReq = 0xda69fb52,
        MsgsStateInfo = 0x04deb57d,
        MsgsAllInfo = 0x8cc0d131,
        MsgDetailedInfo = 0x276d3ec6,
        MsgNewDetailedInfo = 0x809db6df,
        MsgResendReq = 0x7d861a08,
        RpcError = 0x2144ca19,
        RpcAnswerUnknown = 0x5e2ad36e,
        RpcAnswerDroppedRunning = 0xcd78e586,
        RpcAnswerDropped = 0xa43ad8b7,
        FutureSalt = 0x0949d9dc,
        FutureSalts = 0xae500895,
        Pong = 0x347773c5,
        DestroySessionOk = 0xe22045fc,
        DestroySessionNone = 0x62d350c9,
        NewSessionCreated = 0x9ec20908,
        HttpWait = 0x9299359f,
        IpPort = 0xd433ad73,
        HelpConfigSimple = 0xd997c3c5,
        // Types
        BoolFalse = 0xbc799737,
        BoolTrue = 0x997275b5,
        True = 0x3fedd339,
        Vector = 0x1cb5c415,
        Error = 0xc4b9f9bb,
        Null = 0x56730bcc,
        InputPeerEmpty = 0x7f3b18ea,
        InputPeerSelf = 0x7da07ec9,
        InputPeerChat = 0x179be863,
        InputPeerUser = 0x7b8e7de6,
        InputPeerChannel = 0x20adaef8,
        InputUserEmpty = 0xb98886cf,
        InputUserSelf = 0xf7c1b13f,
        InputUser = 0xd8292816,
        InputPhoneContact = 0xf392b7f4,
        InputFile = 0xf52ff27f,
        InputFileBig = 0xfa4f0bb5,
        InputMediaEmpty = 0x9664f57f,
        InputMediaUploadedPhoto = 0x2f37e231,
        InputMediaPhoto = 0x81fa373a,
        InputMediaGeoPoint = 0xf9c44144,
        InputMediaContact = 0xa6e45987,
        InputMediaUploadedDocument = 0xe39621fd,
        InputMediaDocument = 0x5acb668e,
        InputMediaVenue = 0xc13d1c11,
        InputMediaGifExternal = 0x4843b0fd,
        InputMediaPhotoExternal = 0x0922aec1,
        InputMediaDocumentExternal = 0xb6f74335,
        InputMediaGame = 0xd33f43f3,
        InputMediaInvoice = 0x92153685,
        InputMediaGeoLive = 0x7b1a118f,
        InputChatPhotoEmpty = 0x1ca48f57,
        InputChatUploadedPhoto = 0x927c55b4,
        InputChatPhoto = 0x8953ad37,
        InputGeoPointEmpty = 0xe4c123d6,
        InputGeoPoint = 0xf3b7acc9,
        InputPhotoEmpty = 0x1cd7bf0d,
        InputPhoto = 0xfb95c6c4,
        InputFileLocation = 0x14637196,
        InputEncryptedFileLocation = 0xf5235d55,
        InputDocumentFileLocation = 0x430f0724,
        InputAppEvent = 0x770656a8,
        PeerUser = 0x9db1bc6d,
        PeerChat = 0xbad0e5bb,
        PeerChannel = 0xbddde532,
        StorageFileUnknown = 0xaa963b05,
        StorageFilePartial = 0x40bc6f52,
        StorageFileJpeg = 0x007efe0e,
        StorageFileGif = 0xcae1aadf,
        StorageFilePng = 0x0a4f63c0,
        StorageFilePdf = 0xae1e508d,
        StorageFileMp3 = 0x528a0677,
        StorageFileMov = 0x4b09ebbc,
        StorageFileMp4 = 0xb3cea0e4,
        StorageFileWebp = 0x1081464c,
        FileLocationUnavailable = 0x7c596b46,
        FileLocation = 0x53d69076,
        UserEmpty = 0x200250ba,
        User = 0x2e13f4c3,
        UserProfilePhotoEmpty = 0x4f11bae1,
        UserProfilePhoto = 0xd559d8c8,
        UserStatusEmpty = 0x09d05049,
        UserStatusOnline = 0xedb93949,
        UserStatusOffline = 0x008c703f,
        UserStatusRecently = 0xe26f42f1,
        UserStatusLastWeek = 0x07bf09fc,
        UserStatusLastMonth = 0x77ebc742,
        ChatEmpty = 0x9ba2d800,
        Chat = 0xd91cdd54,
        ChatForbidden = 0x07328bdb,
        Channel = 0x0cb44b1c,
        ChannelForbidden = 0x289da732,
        ChatFull = 0x2e02a614,
        ChannelFull = 0x76af5481,
        ChatParticipant = 0xc8d7493e,
        ChatParticipantCreator = 0xda13538a,
        ChatParticipantAdmin = 0xe2d6e436,
        ChatParticipantsForbidden = 0xfc900c2b,
        ChatParticipants = 0x3f460fed,
        ChatPhotoEmpty = 0x37c1011c,
        ChatPhoto = 0x6153276a,
        MessageEmpty = 0x83e5de54,
        Message = 0x90dddc11,
        MessageService = 0x9e19a1f6,
        MessageMediaEmpty = 0x3ded6320,
        MessageMediaPhoto = 0xb5223b0f,
        MessageMediaGeo = 0x56e0d474,
        MessageMediaContact = 0x5e7d2f39,
        MessageMediaUnsupported = 0x9f84f49e,
        MessageMediaDocument = 0x7c4414d3,
        MessageMediaWebPage = 0xa32dd600,
        MessageMediaVenue = 0x2ec0533f,
        MessageMediaGame = 0xfdb19008,
        MessageMediaInvoice = 0x84551347,
        MessageMediaGeoLive = 0x7c3c2609,
        MessageActionEmpty = 0xb6aef7b0,
        MessageActionChatCreate = 0xa6638b9a,
        MessageActionChatEditTitle = 0xb5a1ce5a,
        MessageActionChatEditPhoto = 0x7fcb13a8,
        MessageActionChatDeletePhoto = 0x95e3fbef,
        MessageActionChatAddUser = 0x488a7337,
        MessageActionChatDeleteUser = 0xb2ae9b0c,
        MessageActionChatJoinedByLink = 0xf89cf5e8,
        MessageActionChannelCreate = 0x95d2ac92,
        MessageActionChatMigrateTo = 0x51bdb021,
        MessageActionChannelMigrateFrom = 0xb055eaee,
        MessageActionPinMessage = 0x94bd38ed,
        MessageActionHistoryClear = 0x9fbab604,
        MessageActionGameScore = 0x92a72876,
        MessageActionPaymentSentMe = 0x8f31b327,
        MessageActionPaymentSent = 0x40699cd0,
        MessageActionPhoneCall = 0x80e11a7f,
        MessageActionScreenshotTaken = 0x4792929b,
        MessageActionCustomAction = 0xfae69f56,
        Dialog = 0xe4def5db,
        PhotoEmpty = 0x2331b22d,
        Photo = 0x9288dd29,
        PhotoSizeEmpty = 0x0e17e23c,
        PhotoSize = 0x77bfb61b,
        PhotoCachedSize = 0xe9a734fa,
        GeoPointEmpty = 0x1117dd5f,
        GeoPoint = 0x2049d70c,
        AuthCheckedPhone = 0x811ea28e,
        AuthSentCode = 0x5e002502,
        AuthAuthorization = 0xcd050916,
        AuthExportedAuthorization = 0xdf969c2d,
        InputNotifyPeer = 0xb8bc5b0c,
        InputNotifyUsers = 0x193b4417,
        InputNotifyChats = 0x4a95e84e,
        InputNotifyAll = 0xa429b886,
        InputPeerNotifyEventsEmpty = 0xf03064d8,
        InputPeerNotifyEventsAll = 0xe86a2c74,
        InputPeerNotifySettings = 0x38935eb2,
        PeerNotifyEventsEmpty = 0xadd53cb3,
        PeerNotifyEventsAll = 0x6d1ded88,
        PeerNotifySettingsEmpty = 0x70a68512,
        PeerNotifySettings = 0x9acda4c0,
        PeerSettings = 0x818426cd,
        WallPaper = 0xccb03657,
        WallPaperSolid = 0x63117f24,
        InputReportReasonSpam = 0x58dbcab8,
        InputReportReasonViolence = 0x1e22c78d,
        InputReportReasonPornography = 0x2e59d922,
        InputReportReasonOther = 0xe1746d0a,
        UserFull = 0x0f220f3f,
        Contact = 0xf911c994,
        ImportedContact = 0xd0028438,
        ContactBlocked = 0x561bc879,
        ContactStatus = 0xd3680c61,
        ContactsLink = 0x3ace484c,
        ContactsContactsNotModified = 0xb74ba9d2,
        ContactsContacts = 0xeae87e42,
        ContactsImportedContacts = 0x77d01c3b,
        ContactsBlocked = 0x1c138d15,
        ContactsBlockedSlice = 0x900802a1,
        MessagesDialogs = 0x15ba6c40,
        MessagesDialogsSlice = 0x71e094f3,
        MessagesMessages = 0x8c718e87,
        MessagesMessagesSlice = 0x0b446ae3,
        MessagesChannelMessages = 0x99262e37,
        MessagesMessagesNotModified = 0x74535f21,
        MessagesChats = 0x64ff9fd5,
        MessagesChatsSlice = 0x9cd81144,
        MessagesChatFull = 0xe5d7d19c,
        MessagesAffectedHistory = 0xb45c69d1,
        InputMessagesFilterEmpty = 0x57e2f66c,
        InputMessagesFilterPhotos = 0x9609a51c,
        InputMessagesFilterVideo = 0x9fc00e65,
        InputMessagesFilterPhotoVideo = 0x56e9f0e4,
        InputMessagesFilterDocument = 0x9eddf188,
        InputMessagesFilterUrl = 0x7ef0dd87,
        InputMessagesFilterGif = 0xffc86587,
        InputMessagesFilterVoice = 0x50f5c392,
        InputMessagesFilterMusic = 0x3751b49e,
        InputMessagesFilterChatPhotos = 0x3a20ecb8,
        InputMessagesFilterPhoneCalls = 0x80c99768,
        InputMessagesFilterRoundVoice = 0x7a7c17a4,
        InputMessagesFilterRoundVideo = 0xb549da53,
        InputMessagesFilterMyMentions = 0xc1f8e69a,
        InputMessagesFilterGeo = 0xe7026d0d,
        InputMessagesFilterContacts = 0xe062db83,
        UpdateNewMessage = 0x1f2b0afd,
        UpdateMessageID = 0x4e90bfd6,
        UpdateDeleteMessages = 0xa20db0e5,
        UpdateUserTyping = 0x5c486927,
        UpdateChatUserTyping = 0x9a65ea1f,
        UpdateChatParticipants = 0x07761198,
        UpdateUserStatus = 0x1bfbd823,
        UpdateUserName = 0xa7332b73,
        UpdateUserPhoto = 0x95313b0c,
        UpdateContactRegistered = 0x2575bbb9,
        UpdateContactLink = 0x9d2e67c5,
        UpdateNewEncryptedMessage = 0x12bcbd9a,
        UpdateEncryptedChatTyping = 0x1710f156,
        UpdateEncryption = 0xb4a2e88d,
        UpdateEncryptedMessagesRead = 0x38fe25b7,
        UpdateChatParticipantAdd = 0xea4b0e5c,
        UpdateChatParticipantDelete = 0x6e5f8c22,
        UpdateDcOptions = 0x8e5e9873,
        UpdateUserBlocked = 0x80ece81a,
        UpdateNotifySettings = 0xbec268ef,
        UpdateServiceNotification = 0xebe46819,
        UpdatePrivacy = 0xee3b272a,
        UpdateUserPhone = 0x12b9417b,
        UpdateReadHistoryInbox = 0x9961fd5c,
        UpdateReadHistoryOutbox = 0x2f2f21bf,
        UpdateWebPage = 0x7f891213,
        UpdateReadMessagesContents = 0x68c13933,
        UpdateChannelTooLong = 0xeb0467fb,
        UpdateChannel = 0xb6d45656,
        UpdateNewChannelMessage = 0x62ba04d9,
        UpdateReadChannelInbox = 0x4214f37f,
        UpdateDeleteChannelMessages = 0xc37521c9,
        UpdateChannelMessageViews = 0x98a12b4b,
        UpdateChatAdmins = 0x6e947941,
        UpdateChatParticipantAdmin = 0xb6901959,
        UpdateNewStickerSet = 0x688a30aa,
        UpdateStickerSetsOrder = 0x0bb2d201,
        UpdateStickerSets = 0x43ae3dec,
        UpdateSavedGifs = 0x9375341e,
        UpdateBotInlineQuery = 0x54826690,
        UpdateBotInlineSend = 0x0e48f964,
        UpdateEditChannelMessage = 0x1b3f4df7,
        UpdateChannelPinnedMessage = 0x98592475,
        UpdateBotCallbackQuery = 0xe73547e1,
        UpdateEditMessage = 0xe40370a3,
        UpdateInlineBotCallbackQuery = 0xf9d27a5a,
        UpdateReadChannelOutbox = 0x25d6c9c7,
        UpdateDraftMessage = 0xee2bb969,
        UpdateReadFeaturedStickers = 0x571d2742,
        UpdateRecentStickers = 0x9a422c20,
        UpdateConfig = 0xa229dd06,
        UpdatePtsChanged = 0x3354678f,
        UpdateChannelWebPage = 0x40771900,
        UpdateDialogPinned = 0xd711a2cc,
        UpdatePinnedDialogs = 0xd8caf68d,
        UpdateBotWebhookJSON = 0x8317c0c3,
        UpdateBotWebhookJSONQuery = 0x9b9240a6,
        UpdateBotShippingQuery = 0xe0cdc940,
        UpdateBotPrecheckoutQuery = 0x5d2f3aa9,
        UpdatePhoneCall = 0xab0f6b1e,
        UpdateLangPackTooLong = 0x10c2404b,
        UpdateLangPack = 0x56022f4d,
        UpdateFavedStickers = 0xe511996d,
        UpdateChannelReadMessagesContents = 0x89893b45,
        UpdateContactsReset = 0x7084a7be,
        UpdateChannelAvailableMessages = 0x70db6837,
        UpdatesState = 0xa56c2a3e,
        UpdatesDifferenceEmpty = 0x5d75a138,
        UpdatesDifference = 0x00f49ca0,
        UpdatesDifferenceSlice = 0xa8fb1981,
        UpdatesDifferenceTooLong = 0x4afe8f6d,
        UpdatesTooLong = 0xe317af7e,
        UpdateShortMessage = 0x914fbf11,
        UpdateShortChatMessage = 0x16812688,
        UpdateShort = 0x78d4dec1,
        UpdatesCombined = 0x725b04c3,
        Updates = 0x74ae4240,
        UpdateShortSentMessage = 0x11f1331c,
        PhotosPhotos = 0x8dca6aa5,
        PhotosPhotosSlice = 0x15051f54,
        PhotosPhoto = 0x20212ca8,
        UploadFile = 0x096a18d5,
        UploadFileCdnRedirect = 0xea52fe5a,
        DcOption = 0x05d8c6cc,
        Config = 0x9c840964,
        NearestDc = 0x8e1a1775,
        HelpAppUpdate = 0x8987f311,
        HelpNoAppUpdate = 0xc45a6536,
        HelpInviteText = 0x18cb9f78,
        EncryptedChatEmpty = 0xab7ec0a0,
        EncryptedChatWaiting = 0x3bf703dc,
        EncryptedChatRequested = 0xc878527e,
        EncryptedChat = 0xfa56ce36,
        EncryptedChatDiscarded = 0x13d6dd27,
        InputEncryptedChat = 0xf141b5e1,
        EncryptedFileEmpty = 0xc21f497e,
        EncryptedFile = 0x4a70994c,
        InputEncryptedFileEmpty = 0x1837c364,
        InputEncryptedFileUploaded = 0x64bd0306,
        InputEncryptedFile = 0x5a17b5e5,
        InputEncryptedFileBigUploaded = 0x2dc173c8,
        EncryptedMessage = 0xed18c118,
        EncryptedMessageService = 0x23734b06,
        MessagesDhConfigNotModified = 0xc0e24635,
        MessagesDhConfig = 0x2c221edd,
        MessagesSentEncryptedMessage = 0x560f8935,
        MessagesSentEncryptedFile = 0x9493ff32,
        InputDocumentEmpty = 0x72f0eaae,
        InputDocument = 0x18798952,
        DocumentEmpty = 0x36f8c871,
        Document = 0x87232bc7,
        HelpSupport = 0x17c6b5f6,
        NotifyPeer = 0x9fd40bd8,
        NotifyUsers = 0xb4c83b4c,
        NotifyChats = 0xc007cec3,
        NotifyAll = 0x74d07c60,
        SendMessageTypingAction = 0x16bf744e,
        SendMessageCancelAction = 0xfd5ec8f5,
        SendMessageRecordVideoAction = 0xa187d66f,
        SendMessageUploadVideoAction = 0xe9763aec,
        SendMessageRecordAudioAction = 0xd52f73f7,
        SendMessageUploadAudioAction = 0xf351d7ab,
        SendMessageUploadPhotoAction = 0xd1d34a26,
        SendMessageUploadDocumentAction = 0xaa0cd9e4,
        SendMessageGeoLocationAction = 0x176f8ba1,
        SendMessageChooseContactAction = 0x628cbc6f,
        SendMessageGamePlayAction = 0xdd6a8f48,
        SendMessageRecordRoundAction = 0x88f27fbc,
        SendMessageUploadRoundAction = 0x243e1c66,
        ContactsFound = 0x1aa1f784,
        InputPrivacyKeyStatusTimestamp = 0x4f96cb18,
        InputPrivacyKeyChatInvite = 0xbdfb0426,
        InputPrivacyKeyPhoneCall = 0xfabadc5f,
        PrivacyKeyStatusTimestamp = 0xbc2eab30,
        PrivacyKeyChatInvite = 0x500e6dfa,
        PrivacyKeyPhoneCall = 0x3d662b7b,
        InputPrivacyValueAllowContacts = 0x0d09e07b,
        InputPrivacyValueAllowAll = 0x184b35ce,
        InputPrivacyValueAllowUsers = 0x131cc67f,
        InputPrivacyValueDisallowContacts = 0x0ba52007,
        InputPrivacyValueDisallowAll = 0xd66b66c9,
        InputPrivacyValueDisallowUsers = 0x90110467,
        PrivacyValueAllowContacts = 0xfffe1bac,
        PrivacyValueAllowAll = 0x65427b82,
        PrivacyValueAllowUsers = 0x4d5bbe0c,
        PrivacyValueDisallowContacts = 0xf888fa1a,
        PrivacyValueDisallowAll = 0x8b73e763,
        PrivacyValueDisallowUsers = 0x0c7f49b7,
        AccountPrivacyRules = 0x554abb6f,
        AccountDaysTTL = 0xb8d0afdf,
        DocumentAttributeImageSize = 0x6c37c15c,
        DocumentAttributeAnimated = 0x11b58939,
        DocumentAttributeSticker = 0x6319d612,
        DocumentAttributeVideo = 0x0ef02ce6,
        DocumentAttributeAudio = 0x9852f9c6,
        DocumentAttributeFilename = 0x15590068,
        DocumentAttributeHasStickers = 0x9801d2f7,
        MessagesStickersNotModified = 0xf1749a22,
        MessagesStickers = 0x8a8ecd32,
        StickerPack = 0x12b299d4,
        MessagesAllStickersNotModified = 0xe86602c3,
        MessagesAllStickers = 0xedfd405f,
        DisabledFeature = 0xae636f24,
        MessagesAffectedMessages = 0x84d19185,
        ContactLinkUnknown = 0x5f4f9247,
        ContactLinkNone = 0xfeedd3ad,
        ContactLinkHasPhone = 0x268f3f59,
        ContactLinkContact = 0xd502c2d0,
        WebPageEmpty = 0xeb1477e8,
        WebPagePending = 0xc586da1c,
        WebPage = 0x5f07b4bc,
        WebPageNotModified = 0x85849473,
        Authorization = 0x7bf2e6f6,
        AccountAuthorizations = 0x1250abde,
        AccountNoPassword = 0x96dabc18,
        AccountPassword = 0x7c18141c,
        AccountPasswordSettings = 0xb7b72ab3,
        AccountPasswordInputSettings = 0x86916deb,
        AuthPasswordRecovery = 0x137948a5,
        ReceivedNotifyMessage = 0xa384b779,
        ChatInviteEmpty = 0x69df3769,
        ChatInviteExported = 0xfc2e05bc,
        ChatInviteAlready = 0x5a686d7c,
        ChatInvite = 0xdb74f558,
        InputStickerSetEmpty = 0xffb62b95,
        InputStickerSetID = 0x9de7a269,
        InputStickerSetShortName = 0x861cc8a0,
        StickerSet = 0xcd303b41,
        MessagesStickerSet = 0xb60a24a6,
        BotCommand = 0xc27ac8c7,
        BotInfo = 0x98e81d3a,
        KeyboardButton = 0xa2fa4880,
        KeyboardButtonUrl = 0x258aff05,
        KeyboardButtonCallback = 0x683a5e46,
        KeyboardButtonRequestPhone = 0xb16a6c29,
        KeyboardButtonRequestGeoLocation = 0xfc796b3f,
        KeyboardButtonSwitchInline = 0x0568a748,
        KeyboardButtonGame = 0x50f41ccf,
        KeyboardButtonBuy = 0xafd93fbb,
        KeyboardButtonRow = 0x77608b83,
        ReplyKeyboardHide = 0xa03e5b85,
        ReplyKeyboardForceReply = 0xf4108aa0,
        ReplyKeyboardMarkup = 0x3502758c,
        ReplyInlineMarkup = 0x48a30254,
        MessageEntityUnknown = 0xbb92ba95,
        MessageEntityMention = 0xfa04579d,
        MessageEntityHashtag = 0x6f635b0d,
        MessageEntityBotCommand = 0x6cef8ac7,
        MessageEntityUrl = 0x6ed02538,
        MessageEntityEmail = 0x64e475c2,
        MessageEntityBold = 0xbd610bc9,
        MessageEntityItalic = 0x826f8b60,
        MessageEntityCode = 0x28a20571,
        MessageEntityPre = 0x73924be0,
        MessageEntityTextUrl = 0x76a6d327,
        MessageEntityMentionName = 0x352dca58,
        InputMessageEntityMentionName = 0x208e68c9,
        InputChannelEmpty = 0xee8c1e86,
        InputChannel = 0xafeb712e,
        ContactsResolvedPeer = 0x7f077ad9,
        MessageRange = 0x0ae30253,
        UpdatesChannelDifferenceEmpty = 0x3e11affb,
        UpdatesChannelDifferenceTooLong = 0x6a9d7b35,
        UpdatesChannelDifference = 0x2064674e,
        ChannelMessagesFilterEmpty = 0x94d42ee7,
        ChannelMessagesFilter = 0xcd77d957,
        ChannelParticipant = 0x15ebac1d,
        ChannelParticipantSelf = 0xa3289a6d,
        ChannelParticipantCreator = 0xe3e2e1f9,
        ChannelParticipantAdmin = 0xa82fa898,
        ChannelParticipantBanned = 0x222c1886,
        ChannelParticipantsRecent = 0xde3f3c79,
        ChannelParticipantsAdmins = 0xb4608969,
        ChannelParticipantsKicked = 0xa3b54985,
        ChannelParticipantsBots = 0xb0d1865b,
        ChannelParticipantsBanned = 0x1427a5e1,
        ChannelParticipantsSearch = 0x0656ac4b,
        ChannelsChannelParticipants = 0xf56ee2a8,
        ChannelsChannelParticipantsNotModified = 0xf0173fe9,
        ChannelsChannelParticipant = 0xd0d9b163,
        HelpTermsOfService = 0xf1ee3e90,
        FoundGif = 0x162ecc1f,
        FoundGifCached = 0x9c750409,
        MessagesFoundGifs = 0x450a1c0a,
        MessagesSavedGifsNotModified = 0xe8025ca2,
        MessagesSavedGifs = 0x2e0709a5,
        InputBotInlineMessageMediaAuto = 0x292fed13,
        InputBotInlineMessageText = 0x3dcd7a87,
        InputBotInlineMessageMediaGeo = 0xc1b15d65,
        InputBotInlineMessageMediaVenue = 0xaaafadc8,
        InputBotInlineMessageMediaContact = 0x2daf01a7,
        InputBotInlineMessageGame = 0x4b425864,
        InputBotInlineResult = 0x2cbbe15a,
        InputBotInlineResultPhoto = 0xa8d864a7,
        InputBotInlineResultDocument = 0xfff8fdc4,
        InputBotInlineResultGame = 0x4fa417f2,
        BotInlineMessageMediaAuto = 0x0a74b15b,
        BotInlineMessageText = 0x8c7f65e2,
        BotInlineMessageMediaGeo = 0xb722de65,
        BotInlineMessageMediaVenue = 0x4366232e,
        BotInlineMessageMediaContact = 0x35edb4d4,
        BotInlineResult = 0x9bebaeb9,
        BotInlineMediaResult = 0x17db940b,
        MessagesBotResults = 0x947ca848,
        ExportedMessageLink = 0x1f486803,
        MessageFwdHeader = 0xfadff4ac,
        AuthCodeTypeSms = 0x72a3158c,
        AuthCodeTypeCall = 0x741cd3e3,
        AuthCodeTypeFlashCall = 0x226ccefb,
        AuthSentCodeTypeApp = 0x3dbb5986,
        AuthSentCodeTypeSms = 0xc000bba2,
        AuthSentCodeTypeCall = 0x5353e5a7,
        AuthSentCodeTypeFlashCall = 0xab03c6d9,
        MessagesBotCallbackAnswer = 0x36585ea4,
        MessagesMessageEditData = 0x26b5dde6,
        InputBotInlineMessageID = 0x890c3d89,
        InlineBotSwitchPM = 0x3c20629f,
        MessagesPeerDialogs = 0x3371c354,
        TopPeer = 0xedcdc05b,
        TopPeerCategoryBotsPM = 0xab661b5b,
        TopPeerCategoryBotsInline = 0x148677e2,
        TopPeerCategoryCorrespondents = 0x0637b7ed,
        TopPeerCategoryGroups = 0xbd17a14a,
        TopPeerCategoryChannels = 0x161d9628,
        TopPeerCategoryPhoneCalls = 0x1e76a78c,
        TopPeerCategoryPeers = 0xfb834291,
        ContactsTopPeersNotModified = 0xde266ef5,
        ContactsTopPeers = 0x70b772a8,
        DraftMessageEmpty = 0xba4baec5,
        DraftMessage = 0xfd8e711f,
        MessagesFeaturedStickersNotModified = 0x04ede3cf,
        MessagesFeaturedStickers = 0xf89d88e5,
        MessagesRecentStickersNotModified = 0x0b17f890,
        MessagesRecentStickers = 0x5ce20970,
        MessagesArchivedStickers = 0x4fcba9c8,
        MessagesStickerSetInstallResultSuccess = 0x38641628,
        MessagesStickerSetInstallResultArchive = 0x35e410a8,
        StickerSetCovered = 0x6410a5d2,
        StickerSetMultiCovered = 0x3407e51b,
        MaskCoords = 0xaed6dbb2,
        InputStickeredMediaPhoto = 0x4a992157,
        InputStickeredMediaDocument = 0x0438865b,
        Game = 0xbdf9653b,
        InputGameID = 0x032c3e77,
        InputGameShortName = 0xc331e80a,
        HighScore = 0x58fffcd0,
        MessagesHighScores = 0x9a3bfd99,
        TextEmpty = 0xdc3d824f,
        TextPlain = 0x744694e0,
        TextBold = 0x6724abc4,
        TextItalic = 0xd912a59c,
        TextUnderline = 0xc12622c4,
        TextStrike = 0x9bf8bb95,
        TextFixed = 0x6c3f19b9,
        TextUrl = 0x3c2884c1,
        TextEmail = 0xde5a0dd6,
        TextConcat = 0x7e6260d7,
        PageBlockUnsupported = 0x13567e8a,
        PageBlockTitle = 0x70abc3fd,
        PageBlockSubtitle = 0x8ffa9a1f,
        PageBlockAuthorDate = 0xbaafe5e0,
        PageBlockHeader = 0xbfd064ec,
        PageBlockSubheader = 0xf12bb6e1,
        PageBlockParagraph = 0x467a0766,
        PageBlockPreformatted = 0xc070d93e,
        PageBlockFooter = 0x48870999,
        PageBlockDivider = 0xdb20b188,
        PageBlockAnchor = 0xce0d37b0,
        PageBlockList = 0x3a58c7f4,
        PageBlockBlockquote = 0x263d7c26,
        PageBlockPullquote = 0x4f4456d3,
        PageBlockPhoto = 0xe9c69982,
        PageBlockVideo = 0xd9d71866,
        PageBlockCover = 0x39f23300,
        PageBlockEmbed = 0xcde200d1,
        PageBlockEmbedPost = 0x292c7be9,
        PageBlockCollage = 0x08b31c4f,
        PageBlockSlideshow = 0x130c8963,
        PageBlockChannel = 0xef1751b5,
        PageBlockAudio = 0x31b81a7f,
        PagePart = 0x8e3f9ebe,
        PageFull = 0x556ec7aa,
        PhoneCallDiscardReasonMissed = 0x85e42301,
        PhoneCallDiscardReasonDisconnect = 0xe095c1a0,
        PhoneCallDiscardReasonHangup = 0x57adc690,
        PhoneCallDiscardReasonBusy = 0xfaf7e8c9,
        DataJSON = 0x7d748d04,
        LabeledPrice = 0xcb296bf8,
        Invoice = 0xc30aa358,
        PaymentCharge = 0xea02c27e,
        PostAddress = 0x1e8caaeb,
        PaymentRequestedInfo = 0x909c3f94,
        PaymentSavedCredentialsCard = 0xcdc27a1f,
        WebDocument = 0xc61acbd8,
        InputWebDocument = 0x9bed434d,
        InputWebFileLocation = 0xc239d686,
        UploadWebFile = 0x21e753bc,
        PaymentsPaymentForm = 0x3f56aea3,
        PaymentsValidatedRequestedInfo = 0xd1451883,
        PaymentsPaymentResult = 0x4e5f810d,
        PaymentsPaymentVerficationNeeded = 0x6b56b921,
        PaymentsPaymentReceipt = 0x500911e1,
        PaymentsSavedInfo = 0xfb8fe43c,
        InputPaymentCredentialsSaved = 0xc10eb2cf,
        InputPaymentCredentials = 0x3417d728,
        InputPaymentCredentialsApplePay = 0x0aa1c39f,
        InputPaymentCredentialsAndroidPay = 0x795667a6,
        AccountTmpPassword = 0xdb64fd34,
        ShippingOption = 0xb6213cdf,
        InputStickerSetItem = 0xffa0a496,
        InputPhoneCall = 0x1e36fded,
        PhoneCallEmpty = 0x5366c915,
        PhoneCallWaiting = 0x1b8f4ad1,
        PhoneCallRequested = 0x83761ce4,
        PhoneCallAccepted = 0x6d003d3f,
        PhoneCall = 0xffe6ab67,
        PhoneCallDiscarded = 0x50ca4de1,
        PhoneConnection = 0x9d4c17c0,
        PhoneCallProtocol = 0xa2bb35cb,
        PhonePhoneCall = 0xec82e140,
        UploadCdnFileReuploadNeeded = 0xeea8e46e,
        UploadCdnFile = 0xa99fca4f,
        CdnPublicKey = 0xc982eaba,
        CdnConfig = 0x5725e40a,
        LangPackString = 0xcad181f6,
        LangPackStringPluralized = 0x6c47ac9f,
        LangPackStringDeleted = 0x2979eeb2,
        LangPackDifference = 0xf385c1f6,
        LangPackLanguage = 0x117698f1,
        ChannelAdminRights = 0x5d7ceba5,
        ChannelBannedRights = 0x58cf4249,
        ChannelAdminLogEventActionChangeTitle = 0xe6dfb825,
        ChannelAdminLogEventActionChangeAbout = 0x55188a2e,
        ChannelAdminLogEventActionChangeUsername = 0x6a4afc38,
        ChannelAdminLogEventActionChangePhoto = 0xb82f55c3,
        ChannelAdminLogEventActionToggleInvites = 0x1b7907ae,
        ChannelAdminLogEventActionToggleSignatures = 0x26ae0971,
        ChannelAdminLogEventActionUpdatePinned = 0xe9e82c18,
        ChannelAdminLogEventActionEditMessage = 0x709b2405,
        ChannelAdminLogEventActionDeleteMessage = 0x42e047bb,
        ChannelAdminLogEventActionParticipantJoin = 0x183040d3,
        ChannelAdminLogEventActionParticipantLeave = 0xf89777f2,
        ChannelAdminLogEventActionParticipantInvite = 0xe31c34d8,
        ChannelAdminLogEventActionParticipantToggleBan = 0xe6d83d7e,
        ChannelAdminLogEventActionParticipantToggleAdmin = 0xd5676710,
        ChannelAdminLogEventActionChangeStickerSet = 0xb1c3caa7,
        ChannelAdminLogEventActionTogglePreHistoryHidden = 0x5f5c95f1,
        ChannelAdminLogEvent = 0x3b5a3e40,
        ChannelsAdminLogResults = 0xed8af74d,
        ChannelAdminLogEventsFilter = 0xea107ae4,
        PopularContact = 0x5ce14175,
        CdnFileHash = 0x77eec38f,
        MessagesFavedStickersNotModified = 0x9e8fa6d3,
        MessagesFavedStickers = 0xf37f2f16,
        RecentMeUrlUnknown = 0x46e1d13d,
        RecentMeUrlUser = 0x8dbc3336,
        RecentMeUrlChat = 0xa01b22f9,
        RecentMeUrlChatInvite = 0xeb49081d,
        RecentMeUrlStickerSet = 0xbc0a57dc,
        HelpRecentMeUrls = 0x0e0310d7,
        // Functions
        AuthCheckPhone = 0x6fe51dfb,
        AuthSendCode = 0x86aef0ec,
        AuthSignUp = 0x1b067634,
        AuthSignIn = 0xbcd51581,
        AuthLogOut = 0x5717da40,
        AuthResetAuthorizations = 0x9fab0d1a,
        AuthSendInvites = 0x771c1d97,
        AuthExportAuthorization = 0xe5bfffcd,
        AuthImportAuthorization = 0xe3ef9613,
        AuthBindTempAuthKey = 0xcdd42a05,
        AuthImportBotAuthorization = 0x67a3ff2c,
        AuthCheckPassword = 0x0a63011e,
        AuthRequestPasswordRecovery = 0xd897bc66,
        AuthRecoverPassword = 0x4ea56e92,
        AuthResendCode = 0x3ef1a9bf,
        AuthCancelCode = 0x1f040578,
        AuthDropTempAuthKeys = 0x8e48a188,
        AccountRegisterDevice = 0x637ea878,
        AccountUnregisterDevice = 0x65c55b40,
        AccountUpdateNotifySettings = 0x84be5b93,
        AccountGetNotifySettings = 0x12b3ad31,
        AccountResetNotifySettings = 0xdb7e1747,
        AccountUpdateProfile = 0x78515775,
        AccountUpdateStatus = 0x6628562c,
        AccountGetWallPapers = 0xc04cfac2,
        AccountReportPeer = 0xae189d5f,
        AccountCheckUsername = 0x2714d86c,
        AccountUpdateUsername = 0x3e0bdd7c,
        AccountGetPrivacy = 0xdadbc950,
        AccountSetPrivacy = 0xc9f81ce8,
        AccountDeleteAccount = 0x418d4e0b,
        AccountGetAccountTTL = 0x08fc711d,
        AccountSetAccountTTL = 0x2442485e,
        AccountSendChangePhoneCode = 0x08e57deb,
        AccountChangePhone = 0x70c32edb,
        AccountUpdateDeviceLocked = 0x38df3532,
        AccountGetAuthorizations = 0xe320c158,
        AccountResetAuthorization = 0xdf77f3bc,
        AccountGetPassword = 0x548a30f5,
        AccountGetPasswordSettings = 0xbc8d11bb,
        AccountUpdatePasswordSettings = 0xfa7c4b86,
        AccountSendConfirmPhoneCode = 0x1516d7bd,
        AccountConfirmPhone = 0x5f2178c3,
        AccountGetTmpPassword = 0x4a82327e,
        UsersGetUsers = 0x0d91a548,
        UsersGetFullUser = 0xca30a5b1,
        ContactsGetStatuses = 0xc4a353ee,
        ContactsGetContacts = 0xc023849f,
        ContactsImportContacts = 0x2c800be5,
        ContactsDeleteContact = 0x8e953744,
        ContactsDeleteContacts = 0x59ab389e,
        ContactsBlock = 0x332b49fc,
        ContactsUnblock = 0xe54100bd,
        ContactsGetBlocked = 0xf57c350f,
        ContactsExportCard = 0x84e53737,
        ContactsImportCard = 0x4fe196fe,
        ContactsSearch = 0x11f812d8,
        ContactsResolveUsername = 0xf93ccba3,
        ContactsGetTopPeers = 0xd4982db5,
        ContactsResetTopPeerRating = 0x1ae373ac,
        ContactsResetSaved = 0x879537f1,
        MessagesGetMessages = 0x4222fa74,
        MessagesGetDialogs = 0x191ba9c5,
        MessagesGetHistory = 0xdcbb8260,
        MessagesSearch = 0x039e9ea0,
        MessagesReadHistory = 0x0e306d3a,
        MessagesDeleteHistory = 0x1c015b09,
        MessagesDeleteMessages = 0xe58e95d2,
        MessagesReceivedMessages = 0x05a954c0,
        MessagesSetTyping = 0xa3825e50,
        MessagesSendMessage = 0xfa88427a,
        MessagesSendMedia = 0xc8f16791,
        MessagesForwardMessages = 0x708e0195,
        MessagesReportSpam = 0xcf1592db,
        MessagesHideReportSpam = 0xa8f1709b,
        MessagesGetPeerSettings = 0x3672e09c,
        MessagesGetChats = 0x3c6aa187,
        MessagesGetFullChat = 0x3b831c66,
        MessagesEditChatTitle = 0xdc452855,
        MessagesEditChatPhoto = 0xca4c79d8,
        MessagesAddChatUser = 0xf9a0aa09,
        MessagesDeleteChatUser = 0xe0611f16,
        MessagesCreateChat = 0x09cb126e,
        MessagesForwardMessage = 0x33963bf9,
        MessagesGetDhConfig = 0x26cf8950,
        MessagesRequestEncryption = 0xf64daf43,
        MessagesAcceptEncryption = 0x3dbc0415,
        MessagesDiscardEncryption = 0xedd923c5,
        MessagesSetEncryptedTyping = 0x791451ed,
        MessagesReadEncryptedHistory = 0x7f4b690a,
        MessagesSendEncrypted = 0xa9776773,
        MessagesSendEncryptedFile = 0x9a901b66,
        MessagesSendEncryptedService = 0x32d439a4,
        MessagesReceivedQueue = 0x55a5bb66,
        MessagesReportEncryptedSpam = 0x4b0c8c0f,
        MessagesReadMessageContents = 0x36a73f77,
        MessagesGetAllStickers = 0x1c9618b1,
        MessagesGetWebPagePreview = 0x25223e24,
        MessagesExportChatInvite = 0x7d885289,
        MessagesCheckChatInvite = 0x3eadb1bb,
        MessagesImportChatInvite = 0x6c50051c,
        MessagesGetStickerSet = 0x2619a90e,
        MessagesInstallStickerSet = 0xc78fe460,
        MessagesUninstallStickerSet = 0xf96e55de,
        MessagesStartBot = 0xe6df7378,
        MessagesGetMessagesViews = 0xc4c8a55d,
        MessagesToggleChatAdmins = 0xec8bd9e1,
        MessagesEditChatAdmin = 0xa9e69f2e,
        MessagesMigrateChat = 0x15a3b8e3,
        MessagesSearchGlobal = 0x9e3cacb0,
        MessagesReorderStickerSets = 0x78337739,
        MessagesGetDocumentByHash = 0x338e2464,
        MessagesSearchGifs = 0xbf9a776b,
        MessagesGetSavedGifs = 0x83bf3d52,
        MessagesSaveGif = 0x327a30cb,
        MessagesGetInlineBotResults = 0x514e999d,
        MessagesSetInlineBotResults = 0xeb5ea206,
        MessagesSendInlineBotResult = 0xb16e06fe,
        MessagesGetMessageEditData = 0xfda68d36,
        MessagesEditMessage = 0x05d1b8dd,
        MessagesEditInlineBotMessage = 0xb0e08243,
        MessagesGetBotCallbackAnswer = 0x810a9fec,
        MessagesSetBotCallbackAnswer = 0xd58f130a,
        MessagesGetPeerDialogs = 0x2d9776b9,
        MessagesSaveDraft = 0xbc39e14b,
        MessagesGetAllDrafts = 0x6a3f8d65,
        MessagesGetFeaturedStickers = 0x2dacca4f,
        MessagesReadFeaturedStickers = 0x5b118126,
        MessagesGetRecentStickers = 0x5ea192c9,
        MessagesSaveRecentSticker = 0x392718f8,
        MessagesClearRecentStickers = 0x8999602d,
        MessagesGetArchivedStickers = 0x57f17692,
        MessagesGetMaskStickers = 0x65b8c79f,
        MessagesGetAttachedStickers = 0xcc5b67cc,
        MessagesSetGameScore = 0x8ef8ecc0,
        MessagesSetInlineGameScore = 0x15ad9f64,
        MessagesGetGameHighScores = 0xe822649d,
        MessagesGetInlineGameHighScores = 0x0f635e1b,
        MessagesGetCommonChats = 0x0d0a48c4,
        MessagesGetAllChats = 0xeba80ff0,
        MessagesGetWebPage = 0x32ca8f91,
        MessagesToggleDialogPin = 0x3289be6a,
        MessagesReorderPinnedDialogs = 0x959ff644,
        MessagesGetPinnedDialogs = 0xe254d64e,
        MessagesSetBotShippingResults = 0xe5f672fa,
        MessagesSetBotPrecheckoutResults = 0x09c2dd95,
        MessagesUploadMedia = 0x519bc2b1,
        MessagesSendScreenshotNotification = 0xc97df020,
        MessagesGetFavedStickers = 0x21ce0b0e,
        MessagesFaveSticker = 0xb9ffc55b,
        MessagesGetUnreadMentions = 0x46578472,
        MessagesReadMentions = 0x0f0189d3,
        MessagesGetRecentLocations = 0x249431e2,
        UpdatesGetState = 0xedd4882a,
        UpdatesGetDifference = 0x25939651,
        UpdatesGetChannelDifference = 0x03173d78,
        PhotosUpdateProfilePhoto = 0xf0bb5152,
        PhotosUploadProfilePhoto = 0x4f32c098,
        PhotosDeletePhotos = 0x87cf7f2f,
        PhotosGetUserPhotos = 0x91cd32a8,
        UploadSaveFilePart = 0xb304a621,
        UploadGetFile = 0xe3a6cfb5,
        UploadSaveBigFilePart = 0xde7b673d,
        UploadGetWebFile = 0x24e6818d,
        UploadGetCdnFile = 0x2000bcc3,
        UploadReuploadCdnFile = 0x1af91c09,
        UploadGetCdnFileHashes = 0xf715c87b,
        HelpGetConfig = 0xc4f9186b,
        HelpGetNearestDc = 0x1fb33026,
        HelpGetAppUpdate = 0xae2de196,
        HelpSaveAppLog = 0x6f02f748,
        HelpGetInviteText = 0x4d392343,
        HelpGetSupport = 0x9cdf08cd,
        HelpGetAppChangelog = 0x9010ef6f,
        HelpGetTermsOfService = 0x350170f3,
        HelpSetBotUpdatesStatus = 0xec22cfcd,
        HelpGetCdnConfig = 0x52029342,
        HelpGetRecentMeUrls = 0x3dc0f114,
        ChannelsReadHistory = 0xcc104937,
        ChannelsDeleteMessages = 0x84c1fd4e,
        ChannelsDeleteUserHistory = 0xd10dd71b,
        ChannelsReportSpam = 0xfe087810,
        ChannelsGetMessages = 0x93d7b347,
        ChannelsGetParticipants = 0x123e05e9,
        ChannelsGetParticipant = 0x546dd7a6,
        ChannelsGetChannels = 0x0a7f6bbb,
        ChannelsGetFullChannel = 0x08736a09,
        ChannelsCreateChannel = 0xf4893d7f,
        ChannelsEditAbout = 0x13e27f1e,
        ChannelsEditAdmin = 0x20b88214,
        ChannelsEditTitle = 0x566decd0,
        ChannelsEditPhoto = 0xf12e57c9,
        ChannelsCheckUsername = 0x10e6bd2c,
        ChannelsUpdateUsername = 0x3514b3de,
        ChannelsJoinChannel = 0x24b524c5,
        ChannelsLeaveChannel = 0xf836aa95,
        ChannelsInviteToChannel = 0x199f3a6c,
        ChannelsExportInvite = 0xc7560885,
        ChannelsDeleteChannel = 0xc0111fe3,
        ChannelsToggleInvites = 0x49609307,
        ChannelsExportMessageLink = 0xc846d22d,
        ChannelsToggleSignatures = 0x1f69b606,
        ChannelsUpdatePinnedMessage = 0xa72ded52,
        ChannelsGetAdminedPublicChannels = 0x8d8d82d7,
        ChannelsEditBanned = 0xbfd915cd,
        ChannelsGetAdminLog = 0x33ddf480,
        ChannelsSetStickers = 0xea8ca4f9,
        ChannelsReadMessageContents = 0xeab5dc38,
        ChannelsDeleteHistory = 0xaf369d42,
        ChannelsTogglePreHistoryHidden = 0xeabbb94c,
        BotsSendCustomRequest = 0xaa2769ed,
        BotsAnswerWebhookJSONQuery = 0xe6213f4d,
        PaymentsGetPaymentForm = 0x99f09745,
        PaymentsGetPaymentReceipt = 0xa092a980,
        PaymentsValidateRequestedInfo = 0x770a8e74,
        PaymentsSendPaymentForm = 0x2b8879b3,
        PaymentsGetSavedInfo = 0x227d824b,
        PaymentsClearSavedInfo = 0xd83d70c1,
        StickersCreateStickerSet = 0x9bd86e6a,
        StickersRemoveStickerFromSet = 0xf7760f51,
        StickersChangeStickerPosition = 0xffb6d4ca,
        StickersAddStickerToSet = 0x8653febe,
        PhoneGetCallConfig = 0x55451fa9,
        PhoneRequestCall = 0x5b95b3d4,
        PhoneAcceptCall = 0x3bd2b4a0,
        PhoneConfirmCall = 0x2efe1722,
        PhoneReceivedCall = 0x17d54f61,
        PhoneDiscardCall = 0x78d413a6,
        PhoneSetCallRating = 0x1c536a34,
        PhoneSaveCallDebug = 0x277add7e,
        LangpackGetLangPack = 0x9ab5c58e,
        LangpackGetStrings = 0x2e1ee318,
        LangpackGetDifference = 0x0b2e4d7d,
        LangpackGetLanguages = 0x800fd57d,
        // Extra predicates
        ReqPq = 0x60469778,
        ReqDHParams = 0xd712e4be,
        SetClientDHParams = 0xf5045f1f,
        DestroyAuthKey = 0xd1435160,
        RpcResult = 0xf35c6d01,
        MsgContainer = 0x73f1f8dc,
        MsgCopy = 0xe06046b2,
        GzipPacked = 0x3072cfa1,
        RpcDropAnswer = 0x58e4a740,
        GetFutureSalts = 0xb921bd04,
        Ping = 0x7abe77ec,
        PingDelayDisconnect = 0xf3427b8c,
        DestroySession = 0xe7512126,
        ContestSaveDeveloperInfo = 0x9a5f6e95,
        InvokeAfterMsg = 0xcb9f372d,
        InvokeAfterMsgs = 0x3dc4b4f0,
        InitConnection = 0xc7481da6,
        InvokeWithLayer = 0xda9b0d0d,
        InvokeWithoutUpdates = 0xbf9459b7,
        // End of generated TLValues
    };

    explicit constexpr TLValue(quint32 i = 0) :
        m_value(Value(i))
    {
    }

    constexpr TLValue(Value v) :
        m_value(v)
    {
    }

    constexpr operator quint32() const
    {
        return m_value;
    }

    bool isValid() const;

    TLValue &operator=(TLValue::Value v)
    {
        m_value = v;
        return *this;
    }

    template <typename TLType>
    bool isTypeOf() const
    {
        return TLType::hasType(m_value);
    }

    QString toString() const;
    static TLValue firstFromArray(const QByteArray &data);

private:
    Value m_value;

};

#endif // TLVALUES_HPP
