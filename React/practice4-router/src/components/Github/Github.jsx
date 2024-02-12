import React from 'react'
import { useLoaderData } from 'react-router-dom'

function Github() {
    const data = useLoaderData()
    
  return (
    <div className='text-center flex items-center gap-x-5 justify-center m-4 bg-gray-300 text-white p-4 text-3xl rounded-xl'>
        <img src={data.avatar_url} className='rounded-xl gap-x-5' alt="Git picture" width={100} />
        <div className='bg-gray-500 p-5 rounded-lg'>Github following: {data.following}</div> 
        <div className='bg-gray-500 p-5 rounded-lg'>Github followers: {data.followers}</div> 
    </div>
  )
}

export default Github

export const githubInfoLoader = async () => {
    const response = await fetch('https://api.github.com/users/AmitBiswas1402')
    return response.json()
}