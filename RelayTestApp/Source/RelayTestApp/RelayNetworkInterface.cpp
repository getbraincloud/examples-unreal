// Fill out your copyright notice in the Description page of Project Settings.

#include "RelayNetworkInterface.h"
#include "ServiceName.h"
#include "ServiceOperation.h"
#include "Kismet/GameplayStatics.h"
// Sets default values
ARelayNetworkInterface::ARelayNetworkInterface()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	//serverCallback = new ServerBCCallback();
	//bcRTTCallback = new RTTCallback();
	//this->AddToRoot();
}

// Called when the game starts or when spawned
void ARelayNetworkInterface::BeginPlay()
{
	Super::BeginPlay();
	/*BraincloudInit();
	IsLoading=false;
	ErrorOccured=false;*/
}

// Called every frame
void ARelayNetworkInterface::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	/*if(_bcWrapper!=nullptr)
	{
		_bcWrapper->runCallbacks();
	}*/
}

void ARelayNetworkInterface::BraincloudInit()
{
	//_bcWrapper = NewObject<UBrainCloudWrapper>();
	//_bcWrapper->AddToRoot();
	//_bcWrapper->setWrapperName("wrapper");
	
	//ToDo: Need to get version from client
	//_bcWrapper->initialize(ServerURL,SecretKey,AppID,"1.0");
}

void ARelayNetworkInterface::LoginUniversal(FString username,FString password)
{
	//_bcWrapper->authenticateUniversal(username,password,true,serverCallback);
	UE_LOG(LogTemp, Log, TEXT("Loggin in..."));
	
}

void ARelayNetworkInterface::LookForLobby()
{
	
	//Enable RTT
	//_bcWrapper->getRTTService()->registerRTTLobbyCallback(bcRTTCallback);
	//_bcWrapper->getRTTService()->enableRTT(BCRTTConnectionType::WEBSOCKET,serverCallback);
}

void ARelayNetworkInterface::SubmitPlayerName()
{
	//_bcWrapper->getPlayerStateService()->updateName(_username,serverCallback);
	UE_LOG(LogTemp, Log,TEXT("SubmittedName"));
}

URelayGameInstance* ARelayNetworkInterface::GetInstance()
{
	URelayGameInstance* instance = Cast<URelayGameInstance>(UGameplayStatics::GetGameInstance(UWorld().GetWorld()));
	return instance;
}

ARelayNetworkInterface* ARelayNetworkInterface::GetInterface()
{
	UWorld* world = GEngine->GameViewport->GetWorld();
	for(ULevel* level : world->GetLevels())
	{
		for(AActor* actor : level->Actors)
		{
			if(actor && actor->GetName().Contains("ARelayNetworkInterface"))
			{
				ARelayNetworkInterface* interface = Cast<ARelayNetworkInterface>(actor);
				return interface;
			}
		}
	}
	return nullptr;
}

FString ARelayNetworkInterface::FJsonValueToString(const FString& jsonData,FString valueToGet)
{
	TSharedPtr<FJsonObject> JsonParsed;
	TSharedRef<TJsonReader<TCHAR>> JsonReader = TJsonReaderFactory<TCHAR>::Create(jsonData);
	if(FJsonSerializer::Deserialize(JsonReader,JsonParsed))
	{
		return JsonParsed->GetStringField(valueToGet);
	}

	return "";
}

uint8 ARelayNetworkInterface::FJsonValueToInt(const FString& jsonData, FString valueToGet)
{
	TSharedPtr<FJsonObject> JsonParsed;
	TSharedRef<TJsonReader<TCHAR>> JsonReader = TJsonReaderFactory<TCHAR>::Create(jsonData);
	if(FJsonSerializer::Deserialize(JsonReader,JsonParsed))
	{
		return JsonParsed->GetIntegerField(valueToGet);
	}
	return 0;
}

/********************************************************************************************************/

/*void ServerBCCallback::serverCallback(ServiceName serviceName, ServiceOperation serviceOperation,
                                          const FString& jsonData)
{
	GEngine->AddOnScreenDebugMessage(-1,15.f,FColor::Green,TEXT("Service: ") + serviceName.getValue());
	if(serviceName == ServiceName::AuthenticateV2)
	{
		GEngine->AddOnScreenDebugMessage(-1,15.f,FColor::Green,TEXT("Authenticated!"));
		UE_LOG(LogTemp, Log, TEXT("Authenticated!"));	
		ARelayNetworkInterface::GetInterface()->SubmitPlayerName();
	}
	else if(serviceName==ServiceName::PlayerState)
	{
		ARelayNetworkInterface::GetInterface()->IsLoading = false;	
	}
	else if(serviceName==ServiceName::Time)
	{
		GEngine->AddOnScreenDebugMessage(-1,15.f,FColor::Green,TEXT("Reading the Time...."));
		UE_LOG(LogTemp, Log, TEXT("Reading the Time...."));
	}
	else if(serviceName==ServiceName::RTT)
	{
		UE_LOG(LogTemp, Log, TEXT("RTT?"));
	}
	else if(serviceName==ServiceName::RTTRegistration)
	{
		//rttCallback(jsonData);
		UE_LOG(LogTemp, Log, TEXT("RTT Register?"));
	}
	else if(serviceName==ServiceName::Lobby)
	{
		UE_LOG(LogTemp, Log, TEXT("Lobby?"));
		//BCHelper::OnLobbyEvent(jsonData);
	}
}*/

/*void ServerBCCallback::serverError(ServiceName serviceName, ServiceOperation serviceOperation, int32 statusCode,
	int32 reasonCode, const FString& jsonError)
{
	ARelayNetworkInterface* interface = ARelayNetworkInterface::GetInterface();
	if(interface != nullptr)
	{
		interface->IsLoading=false;
		interface->ErrorMessage=jsonError;
		//ErrorOccured is watched within Game level blueprint within its tick
		//When this is true, a pop up dialog will appear and show the jsonError that occured.
		interface->ErrorOccured=true;	
	}
}*/

/*void ServerBCCallback::rttCallback(const FString& jsonData)
{
	FString colorIndex = "0";//FString::FromInt(data->CurrentUser.colorIndex);
	TArray<FString> memberStringArray;
	_bcWrapper->getLobbyService()->findOrCreateLobby(
		"CursorPartyV2",// lobby type
	    76,              // rating
	    5,              // max steps
	    "{\"strategy\":\"ranged-absolute\",\"alignment\":\"center\",\"ranges\":[1000]}", // algorithm
	    "{}",           // filters
	    2,             // time
	    false,             // ready
	    "{\"colorIndex\":" + colorIndex + "}", //extra         
	    "all",			// team code
		"{}",			//config
	    memberStringArray,
	    this
	);
}*/

/*void ARelayNetworkInterface::OnLobbyEvent(const FString& jsonData)
{
	if(jsonData.Contains("lobby"))
	{
		
		//GEngine->AddOnScreenDebugMessage(-1,15.f,FColor::Green,TEXT("Service: ") + data->Lobby.members.Num());
		//Update users on list
	}
	//FString operation = data->FJsonValueToString(jsonData,"operation");
	/*if(!operation.IsEmpty())
	{
	GEngine->AddOnScreenDebugMessage(-1,15.f,FColor::Green,TEXT("Operation: ")+operation);
		
	}#1#
	GEngine->AddOnScreenDebugMessage(-1,15.f,FColor::Green,TEXT("JSON: ")+jsonData);
}*/

/*FLobby ARelayNetworkInterface::parseLobby(const FString& jsonData)
{
	FLobby lobby;
	FString lobbyID = FJsonValueToString(jsonData,"lobbyID"); 
	lobby.lobbyId=lobbyID;
	lobby.ownerId = FJsonValueToString(jsonData,"owner");

	TSharedPtr<FJsonObject> JsonParsed;
	TSharedRef<TJsonReader<TCHAR>> JsonReader = TJsonReaderFactory<TCHAR>::Create(jsonData);
	const FString& memberString="members";
	
	if(FJsonSerializer::Deserialize(JsonReader,JsonParsed))
	{
		const auto& jsonMembers= JsonParsed->GetArrayField(memberString);
		for (const auto& Element : jsonMembers)
		{
			FUser member;
			FString memberData = Element.Get()->AsString();
			member.id=FJsonValueToString(memberData,"profileId");
			member.name=FJsonValueToString(memberData,"name");
			member.colorIndex=FJsonValueToInt(memberData,"colorIndex");
			
			if(member.id==GetInstance()->CurrentUser->id)
			{
				member.allowSendTo=false;
			}
			lobby.members.Add(member);
		}
	}
	return lobby;
}*/
