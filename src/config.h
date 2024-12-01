// Language configuration
#define LANG_FR 0
#define LANG_EN 1
//definir la langue d'affichage pour les jours de la semaine
#define LANGUAGE LANG_FR  // Change to LANG_EN for English

// Jours de la semaine seulement, on n'a plus besoin des mois
#if LANGUAGE == LANG_FR
    const char* DAYS[] = {
        "Dimanche",
        "Lundi",
        "Mardi",
        "Mercredi",
        "Jeudi",
        "Vendredi",
        "Samedi"
    };
#else
    const char* DAYS[] = {
        "Sunday",
        "Monday",
        "Tuesday",
        "Wednesday",
        "Thursday",
        "Friday",
        "Saturday"
    };
#endif

#define DATE_FORMAT "%02d.%02d.%4d"  // format: 01.12.2024

#define WIFI_SSID "tonSSID"
#define WIFI_PASS "ton_pwd"
#define OWM_KEY "laclefapidopenweather"
#define OWM_LAT 7.394747662351519
#define OWM_LON 7.394747662351519
#define OWM_LOCATION "ville,CH"
#define TZ_INFO "CET-1CEST,M3.5.0,M10.5.0/3" // https://github.com/nayarsystems/posix_tz_db/blob/master/zones.csv
#define VOLTAGE_INTERVAL 4000 // Seconds between battery voltage updates
#define NTP_INTERVAL	 4600 // Seconds between NTP updates
#define WEATHER_INTERVAL 4500 // Seconds between weather updates
#define REDRAW_INTERVAL  4000 // Seconds between screen redraws

