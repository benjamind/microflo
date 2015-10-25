// !! WARNING: This file is generated from commandformat.json !!
enum GraphCmd {
    GraphCmdReset = 10,
    GraphCmdCreateComponent = 11,
    GraphCmdConnectNodes = 12,
    GraphCmdSendPacket = 13,
    GraphCmdEnd = 14,
    GraphCmdConfigureDebug = 15,
    GraphCmdSubscribeToPort = 16,
    GraphCmdConnectSubgraphPort = 17,
    GraphCmdPing = 18,
    GraphCmdCommunicationOpen = 19,
    GraphCmdStartNetwork = 20,
    GraphCmdSetIoValue = 21,
    GraphCmdNetworkStopped = 100,
    GraphCmdNodeAdded = 101,
    GraphCmdNodesConnected = 102,
    GraphCmdPacketSent = 103,
    GraphCmdNetworkStarted = 104,
    GraphCmdDebugChanged = 105,
    GraphCmdDebugMessage = 106,
    GraphCmdPortSubscriptionChanged = 107,
    GraphCmdSubgraphPortConnected = 108,
    GraphCmdPong = 109,
    GraphCmdPacketDelivered = 110,
    GraphCmdTransmissionEnded = 111,
    GraphCmdSetIoValueCompleted = 112,
    GraphCmdIoValueChanged = 113,
    GraphCmdSendPacketDone = 114,
    GraphCmdInvalid,
    GraphCmdMax = 255
};

static const char *GraphCmd_names[] = {
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    "Reset",
    "CreateComponent",
    "ConnectNodes",
    "SendPacket",
    "End",
    "ConfigureDebug",
    "SubscribeToPort",
    "ConnectSubgraphPort",
    "Ping",
    "CommunicationOpen",
    "StartNetwork",
    "SetIoValue",
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    "NetworkStopped",
    "NodeAdded",
    "NodesConnected",
    "PacketSent",
    "NetworkStarted",
    "DebugChanged",
    "DebugMessage",
    "PortSubscriptionChanged",
    "SubgraphPortConnected",
    "Pong",
    "PacketDelivered",
    "TransmissionEnded",
    "SetIoValueCompleted",
    "IoValueChanged",
    "SendPacketDone",
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    "Max"
};

enum Msg {
    MsgInvalid = 0,
    MsgSetup = 1,
    MsgTick = 2,
    MsgVoid = 3,
    MsgByte = 4,
    MsgBoolean = 6,
    MsgInteger = 7,
    MsgFloat = 8,
    MsgBracketStart = 9,
    MsgBracketEnd = 10,
    MsgMaxDefined,
    MsgMax = 255
};

static const char *Msg_names[] = {
    "Invalid",
    "Setup",
    "Tick",
    "Void",
    "Byte",
    0,
    "Boolean",
    "Integer",
    "Float",
    "BracketStart",
    "BracketEnd",
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    "Max"
};

enum DebugLevel {
    DebugLevelInvalid = 0,
    DebugLevelError = 1,
    DebugLevelInfo = 2,
    DebugLevelDetailed = 3,
    DebugLevelVeryDetailed = 4,
    DebugLevelMax = 255
};

static const char *DebugLevel_names[] = {
    "Invalid",
    "Error",
    "Info",
    "Detailed",
    "VeryDetailed",
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    "Max"
};

enum DebugId {
    DebugInvalid = 0,
    DebugProgramStart = 1,
    DebugComponentCreateStart = 2,
    DebugComponentCreateEnd = 3,
    DebugParserInvalidState = 4,
    DebugParserUnknownState = 5,
    DebugParseHeader = 6,
    DebugParseCommand = 7,
    DebugParseByte = 8,
    DebugParserUnknownCommand = 9,
    DebugParserInvalidCommand = 10,
    DebugParserUnknownPacketType = 11,
    DebugNetworkConnectInvalidNodes = 12,
    DebugConnectNodesStart = 13,
    DebugReadByte = 14,
    DebugAddNodeInvalidInstance = 15,
    DebugComponentSendInvalidPort = 16,
    DebugParseLookForHeader = 17,
    DebugMagicMismatch = 18,
    DebugNotImplemented = 19,
    DebugSubGraphConnectNotASubgraph = 20,
    DebugSubGraphConnectInvalidNodes = 21,
    DebugSubGraphReceivedNormalMessage = 22,
    DebugSendMessageInvalidNode = 23,
    DebugAddNodeInvalidParent = 24,
    DebugSubscribePortInvalidNode = 25,
    DebugIoOperationNotImplemented = 26,
    DebugInvalidComponentUsed = 27,
    DebugIoFailure = 28,
    DebugDeliverMessagesInvalidMessageId = 29,
    DebugNotSupported = 30,
    DebugMagicMatched = 31,
    DebugEndOfTransmission = 32,
    DebugIoInvalidValueSet = 33,
    DebugUnknownIoType = 34,
    DebugSubscribePortInvalidPort = 35,
    DebugUser1 = 100,
    DebugUser2 = 101,
    DebugUser3 = 102,
    DebugUser4 = 103,
    DebugUser5 = 104,
    DebugUser6 = 105,
    DebugMax = 255
};

static const char *DebugId_names[] = {
    "Invalid",
    "ProgramStart",
    "ComponentCreateStart",
    "ComponentCreateEnd",
    "ParserInvalidState",
    "ParserUnknownState",
    "ParseHeader",
    "ParseCommand",
    "ParseByte",
    "ParserUnknownCommand",
    "ParserInvalidCommand",
    "ParserUnknownPacketType",
    "NetworkConnectInvalidNodes",
    "ConnectNodesStart",
    "ReadByte",
    "AddNodeInvalidInstance",
    "ComponentSendInvalidPort",
    "ParseLookForHeader",
    "MagicMismatch",
    "NotImplemented",
    "SubGraphConnectNotASubgraph",
    "SubGraphConnectInvalidNodes",
    "SubGraphReceivedNormalMessage",
    "SendMessageInvalidNode",
    "AddNodeInvalidParent",
    "SubscribePortInvalidNode",
    "IoOperationNotImplemented",
    "InvalidComponentUsed",
    "IoFailure",
    "DeliverMessagesInvalidMessageId",
    "NotSupported",
    "MagicMatched",
    "EndOfTransmission",
    "IoInvalidValueSet",
    "UnknownIoType",
    "SubscribePortInvalidPort",
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    "User1",
    "User2",
    "User3",
    "User4",
    "User5",
    "User6",
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    "Max"
};

enum IoType {
    IoTypeInvalid = 0,
    IoTypeAnalog = 1,
    IoTypeDigital = 2,
    IoTypeTimeMs = 3,
    IoTypePinMode = 4,
    IoTypeMax = 255
};

static const char *IoType_names[] = {
    "Invalid",
    "Analog",
    "Digital",
    "TimeMs",
    "PinMode",
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    "Max"
};
