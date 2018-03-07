# Create Managed APIs
## Create Swagger documentation
Function Apps -> Platform Features -> API definition -> Generate API Definition Template
## Authentication
Function uses a function key

Admin uses your master key

Anonymous is open
## Add API
Api Managment (azure portal) -> APIs -> add API
# Configure API Management policies
## Inbound/outbound policies
API managment (azure portal) -> APIs -> function name -> inbound/outbound processing -> code view
# Protect APIs with rate limits
API managment (azure portal) -> APIs -> function name -> inbound processing -> code view

between inbound tags <inbound> add "Limit call rate per key" policy. context.Subscription.Id object for user sub, rate-limit-by-call calls=100 renewal-period=60 for 100 calls a second
# add caching to improve performance
API managment (azure portal) -> APIs -> function name -> inbound processing -> code view

Get from cache = cache lookup vary by header

API managment (azure portal) -> APIs -> function name -> outbound processing -> code view

store to cache = duration seconds
# monitor APIs
API managment (azure portal) -> Activity log (verbose)

API managment (azure portal) -> Metrics

capacity

failed gateway requests

other gateway requests

overall duration of gateway requests

succesful gateway requests

total gateway requests

unauthorized gateway requests

API managment (azure portal) -> Diagnostics logs -> Turn on diagnostics

Archive to a storage account

stream to an event hub

send to log analytics

Gatewaylogs or AllMetrics

API managment (azure portal) -> Alert rules

Add metric alert

Conditions

Threshold

Period

Email to specific accounts or Administrators

Webhook http/s post for other solutions

Kick off logic app
# customize the Developer portal
API managment (azure portal) -> Overview -> Developer Portal -> Left hand pencil/ruler icon

edit CSS/HTML from here

# add authentication and authorization to applications by using API management
API managment (azure portal) -> Overview -> Publisher Portal -> APIs -> Security

Proxy Authentication

HTTP basic (username + password)

Client Certificates

User authorisation

OAuth2.0 or OpenID Connect

API managment (azure portal) -> Overview -> Publisher Portal -> Products

users can be added to a product and a product can have require subscription, require subscription approval, allow multiple simultaneous subscriptions

can have groups and users attributed to them

# configure API Versions by using API management
API managment (azure portal) -> APIs -> function name -> three dots -> add version

Versioning scheme path (eg https://test.com/v1/ )
Versioning scheme header (eg api-version:v1)
Versioning scheme query string (eg https://test.com/getstuffs?version=v1


# Implement git-based configuration using API management
API managment (azure portal) -> repository -> save to repository (master branch commit message)

From here you can clone repo down

access credentials can be created in azure portal eg git username/password with expiry date.
# Misc notes;
## API Manager Skews
### Developer
NO SLA

AAD integration

Virtual Network

Single region only

No scaling

10 MB cache

500 max requests per second
### Basic
99.9% SLA

NO AAD integration

NO Virtual network

Single region only

up to 2 scale units

50 MB cache

1k max request per second
### Standard
99.9% SLA

AAD integration

NO virtual network

Single region only

up to 4 scale units

1 GB cache

2.5 max requests per second
### Premium
99.5% SLA

AAD integration

Virtual network

Multi-region support

Unlimited scale units

5 GB cache

4k max requests per second
